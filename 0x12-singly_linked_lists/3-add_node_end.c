#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding new node at the end of the list
 * @head: double pointer to the list
 * @str: string to put
 *
 * Return: address of  new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;
	return (n);
}
