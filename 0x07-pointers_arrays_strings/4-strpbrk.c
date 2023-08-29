#include "main.h"
/**
 * _strpbrk - Entry to the goal
 * @s: inputpoints
 * @accept: inputpoint
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int u;

		while (*s)
		{
			for (u = 0; accept[u]; u++)
			{
			if (*s == accept[u])
			return (s);
			}
		s++;
		}

	return ('\0');
}
