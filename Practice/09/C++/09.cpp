#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int h1, m1, h2, m2;
    char x;
    cout << "Введите время прибытия первого человека в 24-м формате (hh:mm)\n";
    cin >> h1 >> x >> m1;
    if (h1 > 23 || m1 > 59)
    {
        cout << "Ошибка: Используйте формат ввода (hh:mm) \n (где hh - часы, а mm - минуты) \n";
        exit(404);
    }
    cout << "Введите время прибытия второго человека в 24-м формате (hh:mm)\n";
    cin >> h2 >> x >> m2;
    if (h2 > 23 || m2 > 59)
    {
        cout << "Ошибка: Используйте формат ввода(hh : mm) \n(где hh - часы, а mm - минуты) \n";
        exit(404);
    }
    const int MIN = 60;
    m1 += h1 * MIN;
    m2 += h2 * MIN;

    if (abs(m1 - m2) <= 15) {
        cout << "Встреча состоится!\n";
    }
    else {
        cout << "Встреча не состоится!\n";
    }
}