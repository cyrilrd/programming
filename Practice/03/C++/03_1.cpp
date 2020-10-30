#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a, b;
cout << "Введите первую переменную ";
cin >> a;
cout << "Введите вторую переменную ";
cin >> b;
cout << "Сумма равна " << a + b ;
cout << "Разность равна " << a - b << endl;
cout << "Произведение равно " << a * b << endl;
cout << "Частное равно " << a / b << endl;
}

