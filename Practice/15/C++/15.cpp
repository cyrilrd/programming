#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	int guess;
	int n;
	bool want_to_play;
	bool win;

	cout << "Это программа, где вам надо угадать число, загаданное компьютером от 0 до 100 включительно.\nВам даётся 5 попыток." << endl;
	cout << "Введите целое число." << endl;
	do {
		want_to_play = false;
		win = false;

		n = rand() % 101;
		for (int tries = 5; tries > 0; tries--) {
			cin >> guess;

			if (guess < n) {
				cout << "Загаданное число больше" << endl;
			}
			else if (guess > n) {
				cout << "Загаданное число меньше" << endl;
			}
			else {
				cout << "Поздравляю! Вы угадали" << endl;
				win = true;
				break;
			}
		}
		if (!win) {
			cout << "Вы проиграли. Было загадано: " << n << endl;
		}

		cout << "Хотите начать сначала? (1 - да)" << endl;
		cin >> guess;
		if (guess == 1) {
			want_to_play = true;
		}
	} while (want_to_play);
}