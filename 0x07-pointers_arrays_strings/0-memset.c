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
	unsigned int itr;

	for (itr = 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
