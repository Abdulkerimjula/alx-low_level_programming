#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number that going to be returned
 *
 * Return: factorial n you
 */
int factorial(int n)
{
	if (n < 0)
	       return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
