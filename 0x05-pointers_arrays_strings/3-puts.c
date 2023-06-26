#include <stdio.h>
#include "main.h"

/**
 * _puts - funtion that prints a string
 *
 * @str: pointer to the string
 *
 * Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
