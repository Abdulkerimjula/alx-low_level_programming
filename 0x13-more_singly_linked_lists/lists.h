#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - you
 * @n: number
 * @next: is pointer to the next addres
 *
 * Description: the typedef struct
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);

#endif