#include <iostream>
#include <locale>
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");
	int x, y, z;
	z = 0;
	cout << "Введите количество билетов:" << endl;
	cin >> x;
	cout << "Введите билеты через пробел:" << endl;
	string a{};
	for (y = 1; y <= x; y++)
	{
		cin >> a;
		if (a[0] == 'a' && a[4] == '5' && a[5] == '5' && a[6] == '6' && a[7] == '6' && a[8] == '1')
		{
			cout << a << ' ';
		}
		else
		{
			z = z + 1;
		}
	}
	if (z == x)
	{
		cout << "-1";
	}
	return 0;
}
