#include <iostream>
#include <sstream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int h1, h2, m1, m2;
    char x;
    cout << "Введите время прибытия первого человека в 24-м формате (чч:мм)" << endl;
    cin >> h1 >> x >> m1;
    cout << "Введите время прибытия второго человека в 24-м формате (чч:мм)" << endl;
    cin >> h2 >> x >> m2;
    const int Min = 60;
    m1 += h1 * Min;
    m2 += h2 * Min;

    if (abs(m1 - m2) <= 15) {
        cout << "Встреча состоится" << endl;
    }
    else {
        cout << "Встреча не состоится" << endl;
    }
}