#include <stdio.h>

/**
 * main - finds and prints the sum of the even
 * followed line
 * Return: o
 */
int main(void)
{
	int e;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (e = 1; e <= 33; ++e)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
