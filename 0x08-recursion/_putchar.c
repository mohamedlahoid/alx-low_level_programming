#include <unistd.h>
/**
 * _putchar - write the character c to stoudt
 * @c: the character to print
 *
 * Return: on cuccess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
