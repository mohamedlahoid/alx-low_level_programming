#include "main.h"
/**
 * constant type fills
 * @s: pointer
 * @b: constant
 * @n: byte to use
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
