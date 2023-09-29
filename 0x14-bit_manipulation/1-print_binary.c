#include "main.h"

/**
 * print_binary - prints binary
 *
 * @n: count
 */
void print_binary(unsigned long int n)
{
	int u, count = 0;
	unsigned long int you;

	for (u = 63; u >= 0; u--)
	{
		you = n >> u;

		if (you & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
