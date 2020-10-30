#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 вещественных числа, каждое в отдельной строке:" << endl;
	double a, b, c, d, dk, x1, x2;
	cin >> a >> b >> c;

	if (a == 0) {
		if (b == 0) {
			cout << "Корней нет" << endl;
		}
		else {
			cout << "x = " << -c / b << endl;
		}
	}
	else {
		d = b * b - 4 * a * c;
		if (d < 0)
			cout << "Дискриминант меньше нуля, корней нет" << endl;
		else if (d == 0) {
			cout << "x = " << -b / (2 * a) << endl;
		}
		else {
			dk = { sqrt (d) };
			x1 = (-b + dk) / (2 * a);
			x2 = (-b - dk) / (2 * a);

			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
}