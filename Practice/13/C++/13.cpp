#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    cout << "введите число: ";
    cin >> x;
    if (x == 1 || x % 2 == 0 && x / 2 != 0)
        cout << "составное" << endl;
    else
        cout << "простое" << endl;
}