#include "main.h"
/**
 * _strlen - return the legnth
 * @s: input paramter
 * Return: legnth of string
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}

	return (total_len);
}
