#include <stdio.h>
/**
  *main - Entry point
  *Description 'print numbers base of  using int'
  *Return: Always 0
  */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII resprestation*/
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");
	return (0);
}
