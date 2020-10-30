#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int w = 37;
	int n[w], x, x1 = 0, x2 = 0, a = 0;
	int r[18] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36 };
	for (int i = 0; i < w; i++) {
		n[i] = 0;
	}
	while (1) {
		cout << "Введите число:" << endl;
		cin >> x;
		if (x < 0) {
			break;
		}
		else if (x > 36) {
			cout << "Неверный ввод";
			break;
		}
		else {
			n[x]++;
			for (int z = 0; z < 18; z++) {
				if (x == r[z]) {
					x1++;
					break;
				}
				else if (z == 17) {
					x2++;
				}
			}
		}
		for (int l = 0; l < w; l++) {
			if (n[l] > a) {
				a = n[l];
			}
		}
		for (int l = 0; l < w; l++) {
			if (n[l] == a) {
				cout << l << " ";
			}
		}
		cout << "\n";
		for (int l = 0; l < w; l++) {
			if (n[l] == 0) {
				cout << l << " ";
			}
		}
		cout << "\n" << x1 << " " << x2 << "\n";
	}
}