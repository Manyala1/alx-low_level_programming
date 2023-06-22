#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * Return: 1 for digit character,
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
