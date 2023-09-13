#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: string
 * @f: pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print - the name
 * @name: string
 * return: nothing
 **/
void print(char *name)
{
	printf("%s\n", name);
}
