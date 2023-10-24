#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer head
 *
 * Return: pointer to the first node reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		*head = next;
	}
	*head = previous;
	return (*head);
}
