#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char c
 * @size: size
 * @c: char
 * Description: create array
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
