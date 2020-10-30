#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
double x,t,v,g,L;
g = 9.8;
cout << "Введите начальное положение: " << endl;
cin >> x;
cout << "Введите время движения: " << endl;
cin >> t;
cout << "Введите начальную скорость: " << endl;
cin >> v;
L = x + v * t + g * t * t / 2;

cout << "\n Расстояние = " << L << endl;
}