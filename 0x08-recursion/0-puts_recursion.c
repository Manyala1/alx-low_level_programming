#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function like puts ()
 * @s: input char
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
