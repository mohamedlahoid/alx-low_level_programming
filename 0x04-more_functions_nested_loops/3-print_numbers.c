#include "main.h"
/**
 * print_numbers - print the numbers since 0 to 9
 *
 * Return: the nubers
 */
void print_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar("\n");
}
