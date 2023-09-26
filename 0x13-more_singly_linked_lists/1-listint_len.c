#include "lists.h"

/**
 * listint_len - returns elements in the linked lists
 * @h: linked list
 *
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
