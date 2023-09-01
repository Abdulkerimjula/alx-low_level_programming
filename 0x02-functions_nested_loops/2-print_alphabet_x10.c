#include "main.h"

/**
 * print_alphabet_x10 - prints 10
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int f;

	f = 0;

	while (f < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		f++;
	}
}
