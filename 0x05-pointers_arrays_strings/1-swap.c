#include "main.h"
/**
 * swap int - swap the value of two intigers
 * @author MED
 * @a: swaps and stores add
 * @b: swaps and stores add
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
