#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int metod;
	double a, b, c, x1, x2, x3, y1, y2, y3, z1, z2, z3, AB, BC, AC, ab, bc, ac, p, s, S;
	cout << "Выберите метод вычисления \n 1 - С использованием длин сторон \n 2 - С использованием координат вершин \n Введите нужную цифру для выбора метода \n";
	cin >> metod;
	if (metod == 1)
	{
		cout << "Введите число - A\n";
		cin >> a;
		cout << "Введите число - B\n";
		cin >> b;
		cout << "Введите число - C\n";
		cin >> c;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "S = " << s;
	}

	if (metod == 2)
	{
		int x1, x2, x3, y1, y2, y3, z1, z2, z3;
		double AB, BC, AC, ab, bc, ac, p, s, S;

		cout << "Введите координату x1: ";
		cin >> x1;
		cout << "Введите координату x2: ";
		cin >> x2;
		cout << "Введите координату x3: ";
		cin >> x3;

		cout << "Введите координату y1: ";
		cin >> y1;
		cout << "Введите координату y2: ";
		cin >> y2;
		cout << "Введите координату y3: ";
		cin >> y3;

		cout << "Введите координату z1: ";
		cin >> z1;
		cout << "Введите координату z2: ";
		cin >> z2;
		cout << "Введите координату z3: ";
		cin >> z3;


		AB = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
		ab = sqrt(AB);

		BC = ((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) + (z2 - z3) * (z2 - z3));
		bc = sqrt(BC);

		AC = ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) + (z1 - z3) * (z1 - z3));
		ac = sqrt(AC);

		p = ((ab + ac + bc) / 2);

		S = ((p - AB) * (p - AC) * (p - BC) * p);

		s = sqrt(S);

		cout << "S = " << s << endl;

		return 0;
	}
	if (a + b < c || a + c < b || c + b < a)
		cout << "Ошибка: данный треугольник не может существовать на плоскости." << endl;
	else {
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "S = " << S << endl;
	}
}