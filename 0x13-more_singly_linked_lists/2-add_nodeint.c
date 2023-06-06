#include "lists.h"

/**
 * add_nodeint - adding  new node at beginning of the list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t __attribute__ (*new)

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
