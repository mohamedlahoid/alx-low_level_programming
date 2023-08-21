#include "main.h"
/**
 * swap int - swap the value of two intigers
 * @a: input para
 * @b: input para
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
