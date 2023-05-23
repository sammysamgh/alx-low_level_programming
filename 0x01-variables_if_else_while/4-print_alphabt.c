#include <stdio.h>

/**
 * main - program that prints alphabets in lower case except q and e
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a = 97;
	int b = 122;

	while (a <= b)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
