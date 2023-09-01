#include "main.h"

/**
 * char *_strcpy - a function  copies the string pointed to by src
 * @dest: it copy 
 * @src: it copy from
 * Return: from string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int s = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; s < a ; s++)
	{
		dest[s] = src[s];
	}
	dest[a] = '\0';
	return (dest);
}
