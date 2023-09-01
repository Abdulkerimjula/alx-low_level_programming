#include <stdio.h>

/**
 * main - Print 0 to 9 and a to f.
 *
 * Return: 0
 */
int main(void)
{
	int t;

	for (t = 48; t < 58; t++)
	{
		putchar(t);
	}
	for (t = 97; t < 103; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
