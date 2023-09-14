#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum - sumed
 * return: 0
 */
int add (int arg, ...);
int main ()
{
return 0;
}
int add (int arg, ...);
{
	va_list bot;

	va_start(bot, arg);

	int i, sum = 0;

	for (i = 0; i < arg; i++);{
		sum += va_arg (bot, int);	
}
	va_end(bot);
	return sum;
}
