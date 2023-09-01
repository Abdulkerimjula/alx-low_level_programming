#include "main.h"

/**
 * times_table - 9 table
 */
void times_table(void)
{
	int f, j, k;

	for (f = 0; f < 10; f++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * f;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
