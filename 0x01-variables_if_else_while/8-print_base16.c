#include <stdio.h>

/**
 * main - program that print base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 15)
	{
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
			putchar('a' + (a - 10));
		}
		a++;
	}
	putchar('\n');

	return (0);
}
