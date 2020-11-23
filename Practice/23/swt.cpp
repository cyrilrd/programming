#include "swt.h" 
#include "oplik.h" 

int swt(int k, int n)
{
	int c = 0;
	c = oplik(n) / (oplik(k) * oplik(n - k));
	return c;
}