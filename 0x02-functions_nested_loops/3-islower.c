#include "main.h"
/**
 * _islower - function to check if characteris lower case
 * @c: check input of function
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
