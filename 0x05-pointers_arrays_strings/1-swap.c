#include "main.h"
/**
 * main - Entry point
 * swap int - swap the value of two intigers
 * @a: input parameter
 * @b: input parameter
 * * Return: nothing
 */
void swap_int(int *a, int *b) /* the function that swaps the value */
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
