#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns length of a string
 * @s: a character
 * Return: value of i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginning of a list
 * @head: head of a list
 * @str: value to insert in an element
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;

	return (add);
}
