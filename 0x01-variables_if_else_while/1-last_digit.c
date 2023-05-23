#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that checks the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigi = n % 10;

	if (lastDigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", lastDigi, n);
	}
	else if (lastDigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", lastDigi, n);
	}
	else if (lastDigi < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", lastDigi, n);
	}

	return (0);
}
