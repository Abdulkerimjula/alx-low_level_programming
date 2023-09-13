#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: the name going to be writed
 * @f:
 * Return: nothing will going to be returned
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == ABDU || f == ABDU)
		return;

	f(name);
}
