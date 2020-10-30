#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
double a, b;
cout << "Введите первое число ";
cin >> a;
cout << "Введите второе число ";
cin >> b;
a = b - a;
b = b - a;
a = b + a;

cout << "Первое число " << a << endl;
cout << "Второе число " << b << endl;
}