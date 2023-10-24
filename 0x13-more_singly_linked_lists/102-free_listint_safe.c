#include "lists.h"
#include <stdlib.h>

/**
 * _ra - reallocates memory for an array fo pointers
 * @@list: old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the list
 */
listint_t **_ra(listint_t **list, size_t, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 * free_listint_safe - frees a listint list
 * @head: double pointer
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*hea = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
