#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begining of a list
 *
 * @head: head of a pointer
 * @n: int add in the list
 * Return: NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
