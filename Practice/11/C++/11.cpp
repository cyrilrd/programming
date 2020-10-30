#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a;
    cout << "Введите возводимое в степень число:" << endl;
    cin >> a;
     
    int b;
    cout << "Введите целое степенное число:" << endl;
    cin >> b;

    double x = 1;
    for (int i = 0; i < b; i++)
        x *= a;

    if (b < 0) {
        x = 1 / x;
    }

    cout << x << endl;
}