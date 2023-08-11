#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Print a text  according number
 * Description: a
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5 )
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastd);
	else if (lastd < 5 		
