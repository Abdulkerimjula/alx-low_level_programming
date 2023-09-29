#include "main.h"

/**
 * flip_bits - counts the numbers
 * @n: first
 * @m: second
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int j;
	unsigned long int k = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		j = k >> i;
		if (j & 1)
			count++;
	}

	return (count);
}
