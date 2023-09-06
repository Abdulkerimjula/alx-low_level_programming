#include <stdio.h>
#include "main.h"

/**
 * main - copy the number of argument
 * @argc: amount of arguments
 * @argv: array
 *
 * Return: null
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
