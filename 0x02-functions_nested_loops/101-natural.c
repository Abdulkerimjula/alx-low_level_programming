/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers
 *        that are excluded
 *
 * Return: 0
 */
int main(void)
{
	int f, sum = 0;

	for (f = 0; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
			sum += f;
	}

	printf("%d\n", sum);

	return (0);
}
