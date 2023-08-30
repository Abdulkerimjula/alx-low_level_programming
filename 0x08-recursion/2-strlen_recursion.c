#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion -  returns the length of  string
 *@s: the returnable string
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s);
{
	longit = 0;

	if(*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}	
	return (longit);
}
