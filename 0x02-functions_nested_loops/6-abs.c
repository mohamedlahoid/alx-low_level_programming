#include "main.h"
/**
 * _abs - computes the absolut value
 * @n: the number to be computed
 * Rturn: Absolute value of number or zero
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
