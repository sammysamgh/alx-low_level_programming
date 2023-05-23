#include <stdio.h>

/**
 * main - program that prints alphabets in lower case
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a = 97;
	int b = 122;
	int c = 65;
	int d = 90;

	while (a <= b)
	{
		putchar(a);
		a++;
	}
	while (c <= d)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
