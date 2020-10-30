#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, x;
	char c;
	cout << "Через пробел введите вещественное число, затем оператор и вещественное число:" << endl;
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':
		x = (a + b);
		break;

	case '-':
		x = (a - b);
		break;

	case '*':
		x = (a * b);
		break;

	case '/':
		if (b == 0)
		{
			cout << "Деление на ноль невозможно" << endl;
			break;
		}
		x = (a / b);
		break;
	default:
		cout << "В одной строке через пробел введите вещественное число, затем оператор и вещественное число" << endl;
	}
	cout << x;
}