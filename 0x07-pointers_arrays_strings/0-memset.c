#include "main.h"
/**
 * constant type fills
 * @s: pointer
 * @b: constant
 * @n: byte to use
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
