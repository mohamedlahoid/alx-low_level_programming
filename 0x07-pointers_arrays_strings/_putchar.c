#include <unistd.h>
/**
 * _putchar - write les character
 * @c : the character to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
