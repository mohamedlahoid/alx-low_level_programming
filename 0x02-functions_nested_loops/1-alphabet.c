#include "main.h"
/**
 * print_alphabet - using on the _putchar function to print alphabet a - z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
