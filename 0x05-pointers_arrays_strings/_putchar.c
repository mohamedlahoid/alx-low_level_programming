#include <unistd.h>
/**
 * _putchar - write a character
 * @c: the character to print
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
