#include "main.h"

/**
 * _memcpy - copy memory erea
 * @dest: memory area
 * @src: source
 * @n: lenght
 *
 * Return : the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
