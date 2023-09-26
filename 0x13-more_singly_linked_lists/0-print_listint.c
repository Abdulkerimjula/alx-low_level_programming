#include "lists.h"

/**
 * print_listint - prints the elements
 * @h: linked list
 *
 * Return: nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t num = ;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
