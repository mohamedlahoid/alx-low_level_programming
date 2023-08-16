#include "main.h"
#include <stdio.h>
/**
 * numLegnth - return the legnth string
 * @num: operrrand number
 * Return: number of digits
 */
int numLegnth(int num)
{
	int legnth = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		legnth += 1;
	}

	return (legnth);
}

/**
 * main - Entry point
 * Description: print the first  98 Fibonacci
 * Return: Always 0
 */
int main(void)
{
	int count, initi10s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
		initi10s = numLegnth(mx) - 1 - numLegnth(f1);

		while (flo > 0 && initi10s > 0)
		{
			printf("%d", 0);
			initi10s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f2o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f2o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
