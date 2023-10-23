#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a list
 *
 * @h: head of the link list
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
