#include "main.h"
/**
 * _puts - print string
 * @str: prints sting
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
