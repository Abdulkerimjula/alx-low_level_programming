#include <stdio.h>

/**
 * main - Prints alphabet.
 *
 * Return: 0
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int o;

	for (o = 0; o < 52; o++)
	{
		putchar(alp[o]);
	}
	putchar('\n');
	return (0);
}
