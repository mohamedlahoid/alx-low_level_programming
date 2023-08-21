#include "main.h"
/**
 * print rev - print reversed string
 * @s: pointer to the string
 * Return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
