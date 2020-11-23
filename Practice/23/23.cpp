#include <iostream> 
#include <iomanip> 
#include "oplik.h" 
#include "zik.h" 
#include "swt.h" 
using namespace std;

int main() {
	cout << "n" << "\t" << "n!\n";
	for (int n = 1; n <= 10; n++) {
		cout << n << "\t" << oplik(n) << "\n";
	}
	cout << "\n";

	float p = 3.1415;
	cout << "x" << "\t" << "zik(x)\n";
	for (float x = 0; x <= p / 4; x = x + p / 180) {
		cout << x << "\t" << setprecision(4) << zik(x) << "\n";
	}
	cout << "\n";

	int n = 10;
	cout << "k" << "\t" << "c(k, 10)\n";
	for (int k = 1; k <= n; k++) {
		cout << k << "\t" << swt(k, n) << "\n";
	}
}