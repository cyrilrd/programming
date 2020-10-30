#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
    setlocale(0, "");
    int n, m;
    cout << "введите число: ";
    cin >> n;
    if (n == 1 || n % 2 == 0 && n / 2 != 0)
        cout << "составное " << endl;
    else
        cout << "простое\n" << endl;
}