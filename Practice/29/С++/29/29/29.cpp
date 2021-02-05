#include <iostream>
#include <map> // для работы со словарем (ключ-значение: предмет-оценка)
#include <string>
#include <vector>
#include <ctime> // библиотека для работы с временем, для рандома
using namespace std;

struct Student { // создаю структуру и объявляю поля
	string name; // поле имени
	int group; // поле группы
	map <string, int> exams; // словарь предметов с оценками

    Student(string name, int group, int math, int phys, int hist, int prog) // конструктор
    {
        // запускаю бесконечный цикл, в котром проверяю корректность  данных
        do // начало без проверки
        {
            if (group < 1 || group > 9)
            {
                cout << "Нет такой группы" << endl;
                cout << "Студент: " << name << ". Введите допустимый номер группы (1-9): ";
                cin >> group;
            }

            else break;

        } while (true);
        // проверка на валидность
        do
        {
            if (math < 2 || math > 5)
            {
                cout << "Введите допустимую оценку (2-5):" << endl;
                cout << "Студент: " << name << ". Предмет: Математика. Оценка: ";
                cin >> math;
                continue;
            }
            if (phys < 2 || phys > 5)
            {
                cout << "Введите допустимую оценку (2-5):" << endl;
                cout << "Студент: " << name << ". Предмет: Физика. Оценка: ";
                cin >> phys;
                continue;
            }
            if (hist < 2 || hist > 5)
            {
                cout << "Введите допустимую оценку (2-5):" << endl;
                cout << "Студент: " << name << ". Предмет: История. Оценка: ";
                cin >> hist;
                continue;
            }
            if (prog < 2 || prog > 5)
            {
                cout << "Введите допустимую оценку (2-5):" << endl;
                cout << "Студент: " << name << ". Предмет: Программирование. Оценка: ";
                cin >> prog;
                continue;
            }
            break;
        } while (true);
        // инициализация словаря
        exams = { {"math", math}, {"phys", phys}, {"hist", hist}, {"prog", prog} };
        // инициализация полей структуры
        this -> name = name; // у этого объекта имя = полю принимаемому в конструторе
        this -> group = group;
    }
    // функции, которые не являются членами структуры, но имеют доступ к закрытым членам структуры - переменным и функциям, которые имеют спецификатор private.
    // Нужна для работы перегрузки оператора в данной структуре
    friend
    ostream& operator << (ostream& ostrOut, const Student& student) // перегрузка - установка логики действия операторам (в данном случае <<)
    {
        //auto автомотически выбирает тип перемнной

        auto nameLength = max(int(student.name.length()), 4); // определяет длину имени для обозначения ширины столбца
        auto stripAbName = string(nameLength, '-'); // строка содержащая нужное количество -
        // что будет оператором << выводиться в консоль
        ostrOut << "+-" << stripAbName << "-+-------+------+------+------+------+\n"
            << "| Name " << string(nameLength - 4, ' ')
            << "| Group | Math | Phys | Hist | Prog |\n"
            << "+-" << stripAbName << "-+-------+------+------+------+------+\n"
            << "| " << student.name << " | " << student.group
            << "    | " << student.exams.at("math")
            << "    | " << student.exams.at("phys")
            << "    | " << student.exams.at("hist")
            << "    | " << student.exams.at("prog")
            << "    |\n"
            << "+-" << stripAbName << "-+-------+------+------+------+------+\n";
        return ostrOut;
    }
    // перегрузка оператора 
    // сравнение этого и другого студента
    bool operator < (Student& other)
    {
        return name < other.name;
    }
    bool operator > (Student& other)
    {
        return name > other.name;
    }

};
// перегрузка для ostream
ostream& operator << (ostream& out, const vector<Student>& studVector)
{
    //опредление длины имени по первому элементу вектора
    auto nameLength = studVector.at(0).name.length();
    // iterator хранит в себе обьект
    // функция begin возвращает первый обЪект вектора и помещается в итератор
    for (auto iterator = studVector.begin() + 1; iterator != studVector.end(); ++iterator)
    {
        if (iterator->name.length() > nameLength)
        {
            nameLength = iterator->name.length();
        }
    }
    auto stripAbName = string(nameLength, '-');
    out 
        << "+-" << stripAbName << "-+-------+------+------+------+------+\n"
        << "| Name " << string(nameLength - 4, ' ')
        << "| Group | Math | Phys | Hist | Prog |\n"
        << "+-" << stripAbName << "-+-------+------+------+------+------+\n";

    for (auto& student : studVector) {
        out << "| " << student.name
            << string(nameLength - student.name.length(), ' ')
            << " | " << student.group << " "
            << "    | " << student.exams.at("math")
            << "    | " << student.exams.at("phys")
            << "    | " << student.exams.at("hist")
            << "    | " << student.exams.at("prog")
            << "    |\n"
            << "+-" << stripAbName << "-+-------+------+------+------+------+\n";
    }
    return out;
};
// функция проверки сдачи экза 
bool hasPassEx(Student& student) {
    // проходит циком по парам предмет-оценка
    for (auto& pair : student.exams)
    {
        // и проверяет у значения ключа равен ли он двойке
        if (pair.second == 2)
        {
            // если да,  то не сдал 
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "ru");

    // начальное значение у рандомайзера
    srand(time(0));
    // создаю вектор из студентов
    // вектор - типа массива, только пыстых мест нету), все последующие элементы после удаленного смещаются влево и меняются индексы
    vector<Student> students = {
        Student("Chabanov V", 5, 5, 5, 5, 5),
        Student("Rudenko K", 2, 2, 2, 2, 5),
        Student("Ivanov I", 3, 3, 3, 3, 3),
        Student("Egorov E", 4, 4, 4, 4, 5),
        Student("Kirillov K", 5, 2, 4, 2, 3),
        Student("Pavlov P", 6, 4, 5, 4, 5),
        Student("Ilin I", 7, 3, 3, 3, 4),
        Student("Marieva M", 8, 5, 4, 5, 5),
        Student("Polskaya P", 9, 3, 3, 3, 4),
        Student("Mirov M", 1, 2, 2, 5, 5),
    };
    // объяляю новый вектор с несдавшими студентами
    vector<Student> notPass;
    // из всех берет первого, потом второго и тд.
    for (auto& student : students)
    {
        // если не сдал
        if (!hasPassEx(student))
        {
            // добавляю в вектор несдавших
            notPass.push_back(student);
        }
    }
    if (notPass.size() > 0)
    {
        cout << notPass << endl;

        cout << "\nExplusion\n" << notPass.at(rand() % notPass.size()) << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}