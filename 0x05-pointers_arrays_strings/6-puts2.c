#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: the used string reference
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
