#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Введите возводимое в степень число и целое степенное число с новой строки" << endl;

    double a;
    int n;
    cin >> a >> n;

    double result = 1;
    for (int i = 0; i < n; i++)
        result *= a;

    if (n < 0) {
        result = 1 / result;
    }

    cout << result << endl;
}