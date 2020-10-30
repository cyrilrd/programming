#include <iostream>
#include <ctime>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int a, x, y;
	bool w, r;
	cout << "У вас есть 5 попыток угадать число от 0 до 100, удачи :)" << endl;

	do {
		r = false;
		w = false;
		y = rand() % 101;
		for (int i = 0; i < 5; i++) {
			cin >> a;
			if (a < y) {
				cout << "*Загаданное число больше:" << endl;
			}
			else if (a > y) {
				cout << "*Загаданное число меньше:" << endl;
			}
			else {
				cout << "*Еху! Вы угадали! Было загадано:" << endl;
				w = true;
				break;
			}
		}
		if (w == false) {
			cout << "*К сожалению, Вы проиграли. Было загадано:" << y << endl;
		}
		cout << "*Хотите начать сначала? (1 - да!)" << endl;
		cin >> x;
		if (x == 1) {
			cout << "У вас есть 5 попыток угадать число от 0 до 100, удачи :)" << endl;
		}
	} while (r);
}