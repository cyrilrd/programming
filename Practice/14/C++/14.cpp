#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите целое число:" << endl;

	long long a;
	cin >> a;

	int x = 0;
	if (a >= 1) {
		x++;
	}

	while (a > 1) {
		a /= 2;
		x++;
	}

	cout << x << endl;
}