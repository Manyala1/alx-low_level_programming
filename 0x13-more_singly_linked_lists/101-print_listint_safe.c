#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer head
 *
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *node = head;

	while (node != NULL)
	{

		if (node < head)
		{
			printf("Loop detected in linked list at node %p\n", (void *)node);
			exit(98);
		}

		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
