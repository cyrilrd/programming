#include "oplik.h" 
int oplik(int i)
{
	int n = 1;
	for (i; i > 0; i--) {
		n = n * i;
	}
	return n;
}