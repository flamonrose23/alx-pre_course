#include "lists.h"

/**
 * sum_listint - calculating sum of all data in the list
 * @head: first node in the list
 *
 * Return: resulting sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
