#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * @h: Pointer to the head
 *
 *
 *
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
