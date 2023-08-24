#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int u;

	for (i = 0; i < n--; i++)
	{
		u = a[i];
		a[i] = a[n];
		a[n] = u;
	}
}
