#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int s, l1, l2, r1, r2, x1, x2, x;
	cout << "Через пробел введите значение числа, границы первого и второго диапазона:" << endl;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	x = 0;
	
	if ((s > (r1 + r2)) || (s < (l1 + l2)))
	{
		cout << -1 << endl;
	}
	else
	{
		if ((s - l1) >= l2)
		{
			if (s <= (l1 + r2))
			{
				cout << l1 << " " << s - l1 << endl;
			}
			else
			{
				x = abs(s - (l1 + r2));
				
				if ((l1 + x) < r1 && (r2 - x) > l2)
				{
					cout << l1 + x << " " << s - (l1 + x) << endl;
				}
				else
				{
					cout << -1 << endl;
				}
			}
		}
		else
		{
			cout << -1 << endl;
		}
	}
}