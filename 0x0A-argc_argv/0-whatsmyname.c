#include <stdio.h>
#include "main.h"

/**
 * main - prints what ever the answer is
 * @argc: amount of arguments
 * @argv: arrays
 *
 * Return: null
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
