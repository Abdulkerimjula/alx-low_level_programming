#include <stdio.h>
#include "main.h"

/**
 * main - copy all arguments
 * @argc: amount of arguments
 * @argv: array
 *
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
