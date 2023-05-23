#include <stdio.h>

/**
 * main - program that print single digit in base 10 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 57;

	while (a <= b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
