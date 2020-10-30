#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	double b;
	char c;
	double x;
	cout << "Через пробел введите вещественное число, затем оператор и вещественное число:\n";
	cin >> a;
	cin >> c;
	cin >> b;

	switch (c)
	{
	case '-':
		x = (a - b);
		break;

	case '+':
		x = (a + b);
		break;

	case '*':
		x = (a * b);
		break;

	case '/':
		if (b == 0)
		{
			cout << "Делить на ноль нельзя";
			break;
		}
		x = (a / b);
		break;
	default:
		cout << "Ошибка:\n В одной строке, через пробел вводятся:\n вещественное число \n оператор \n и вещественное число.\n";
	}
	cout << x;
}