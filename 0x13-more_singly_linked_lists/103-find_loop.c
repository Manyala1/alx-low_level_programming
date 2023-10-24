#include "lists.h"

/**
 * find_listint_loop - finds the loop in the list
 * @head: pointer to the beginning of list
 *
 * Return: adress of the node where there is loop, else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;

		if (slow == fast)
		{
			break;
		}
	}
	if (fast == NULL || fast->next == NULL)
	{
		return (NULL);
	}
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

