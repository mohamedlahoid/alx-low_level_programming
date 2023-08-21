#include "main.h"
/**
 * _strlen - return the legnth
 * @s: input paramter
 * Return: legnth of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	return (longi);
}
