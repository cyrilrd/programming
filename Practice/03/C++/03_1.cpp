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
cout << "\n Разность равна " << a - b;
cout << "\n Произведение равно " << a * b;
cout << "\n Частное равно " << a / b;
}

