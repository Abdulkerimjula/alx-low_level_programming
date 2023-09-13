#include "main.h"

/**
 * _isalpha - alphabetic character
 * @c: the character
 * Return: 1 otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
