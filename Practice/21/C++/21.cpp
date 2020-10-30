#include <iostream>
#include <locale>
using namespace std;

double BMI(double weight, double height) {
	return weight / (height * height);
}

void printBMI(double BMI) {
	if (BMI < 18.5)
		cout << "Недостаток веса" << endl;
	else if (BMI < 25.0)
		cout << "Нормальный вес" << endl;
	else if (BMI < 30.0)
		cout << "Избыточный вес" << endl;
	else
		cout << "Ожирение" << endl;

	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	cout << "Введите свой вес и рост через пробел: ";
	cin >> weight >> height;

	printBMI(BMI(weight, height / 100.0));
}