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

	while (a <= b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
