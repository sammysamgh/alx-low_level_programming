#include <stdio.h>

/**
 * main - program that prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a = 122;
	int b = 97;

	while (a >= b)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
