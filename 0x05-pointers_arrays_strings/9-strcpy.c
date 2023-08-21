#include "main.h"
/**
 * *strcpy - copies the string
 * @dest: char type string
 * @src: char type string
 * Description: copy the string by pointed to the buffer pointed
 * Return: pointed to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
