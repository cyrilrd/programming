#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
double a,b,c;
cout << "Введите первое число: ";
cin >> a;
cout << "Введите второе число: ";
cin >> b;
c = a;
a = b;
b = c;
	
cout << "Первое число " << a << endl;
cout << "Второе число " << b << endl;
}

















