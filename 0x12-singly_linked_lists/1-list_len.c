#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returning number of elements in linked list
 * @h: pointer to list_t list
 *
 * Return: number of elements in h
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
