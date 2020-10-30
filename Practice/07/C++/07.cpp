#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, w, x1, x2, x3, y1, y2, y3, p, s, sb;

	cout << "Расчитать площадь треугольника: \n 1 - С использованием длин сторон \n 2 - С использованием координат вершин" << endl;
	cin >> w;
	if (w == 1)
	{
		cout << "Введите число - A" << endl;
		cin >> a;
		cout << "Введите число - B" << endl;
		cin >> b;
		cout << "Введите число - C" << endl;
		cin >> c;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "S = " << s;
	}

	if (w == 2)
	{
		cout << "Введите числа x1 и y1 через пробел" << endl;
		cin >> x1 >> y1;
		cout << "Введите числа x2 и y2 через пробел" << endl;
		cin >> x2 >> y2;
		cout << "Введите числа x3 и y3 через пробел" << endl;
		cin >> x3 >> y3;
		sb = (((x1 - x3) * (y2 - y3)) - ((x2 - x3) * (y1 - y3))) / 2;
		s = abs(sb);

		cout << s << endl;
	}
}