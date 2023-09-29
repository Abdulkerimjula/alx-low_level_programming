#include "main.h"

/**
 * get_bit - the value of a bit
 * @n: number
 * @index: index of k
 * Return: value k
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > 63)
		return (-1);

	k = (n >> index) & 1;

	return (k);
}
