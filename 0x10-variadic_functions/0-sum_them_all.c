#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns
 * @n: The number of parametrs
 * @...: A variable number of paramters
 * Return: If
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
