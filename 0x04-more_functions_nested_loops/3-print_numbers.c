#include "main.h"
/**
 * print_numbers - print the numbers since 0 to 9
 *
 * Return: the nubers
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
