#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: string to be checked for lenghth
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
