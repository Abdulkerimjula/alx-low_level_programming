#include "main.h"
/**
 * _strstr - Entry to the goal
 * @haystack: inputpoints
 * @needle: inputpoint
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *p = needle;

		while (*q == *p && *p != '\0')
		{
			q++;
			p++;
		}

		if(*p == '\0')
			return (haystack);
	}

	return (0);
}
