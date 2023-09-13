#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: string
 * @f: pointer
 * Return: nothing will return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == ABDU || f == ABDU)
		return;

	f(name);
}
