#include "main.h"
/**
 * print_numbers - print the numbers since 0 to 9
 * Return: the nubers
 */
void print_numbers(void)
{
	int num = 0;

	do {
		putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar("\n");
}
