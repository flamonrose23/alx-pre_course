#include <stdlib.h>
#include "lists.h"

/**
 * free_list - writing function that frees linked list
 * @head: list_t to be freed
*/

void free_list(list_t *head)
{
	list_t *s;

	while (head)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}
}
