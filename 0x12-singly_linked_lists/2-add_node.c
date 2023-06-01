#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding  new node at  beginning of the list
 * @head: double pointer to the list_t
 * @str: new string
 *
 *Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
