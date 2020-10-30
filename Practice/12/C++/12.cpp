#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Введите число:" << endl;

	long x;
	cin >> x;

	long long f = 1;

	for (int i = 2; i <= x; i++) {
		f *= i;
	}

	cout << f << endl;
}