#include "lists.h"

/**
 * sum_listint - sum of n in a list
 * @head: pointer to first node
 *
 * Return: sum of all data values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
