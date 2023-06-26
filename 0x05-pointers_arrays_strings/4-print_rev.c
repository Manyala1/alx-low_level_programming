#include <stdio.h>
#include"main.h"

/**
 * print_rev - function thst prints a string in reverse
 *
 * @s: string used as reference pointer
 *
 * Return: 0 always
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		putchar(s[start]);
	putchar('\n');
}
