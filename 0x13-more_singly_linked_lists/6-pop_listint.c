#include "lists.h"

/**
 * pop_listint - deleting the head node of the list
 * @head: pointer to the first element in the list
 *
 * Return: thead node’s data
 * or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
