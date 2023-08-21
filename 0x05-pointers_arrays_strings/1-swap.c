#include "main.h"
/**
 * swap int - swap the value of two intigers
 * @a: intiger to swap
 * @b: intiger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
