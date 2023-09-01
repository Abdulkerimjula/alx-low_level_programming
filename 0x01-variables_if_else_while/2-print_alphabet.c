#include <stdio.h>

/**
 * main - Prints alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int u;

	for (u = 0; u < 26; u++)
	{
		putchar(alp[u]);
	}
	putchar('\n');
	return (0);
}
