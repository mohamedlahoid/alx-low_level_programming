#include "main.h"
/**
 * print_aray - print element
 * @n: element par
 * @a: string par
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	putchar("\n");
}
