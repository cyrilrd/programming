#include "zik.h" 
#include <cmath> 
#include "oplik.h" 

float zik(float x)
{
	float c = 0;
	for (int n = 0; n <= 4; n++) {
		c = c + pow(-1, n) * pow(x, 2 * n + 1) / oplik(2 * n + 1);
	}
	return c;
}