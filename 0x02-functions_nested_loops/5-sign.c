#include "main.h"

/**
 * print_sign - prints
 * @n: the int
 * Return: 1 and prints + 
 * 0 and prints 0 if n is zero
 * -1 and prints - 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
