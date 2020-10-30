#include <iostream>
#include <string_view>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

string_view str;
string input;

    long long count;
    cin >> count;

    bool banknote_was_found = false;
    for (long long i = 0; i < count; ++i) {
        cin >> input;
        str = input;
        if (str.starts_with('a') && str.ends_with("55661")) {
            banknote_was_found = true;
            cout << str << " ";
        }
    }
    if (!banknote_was_found) {
        cout << -1 << endl;
    }
}
