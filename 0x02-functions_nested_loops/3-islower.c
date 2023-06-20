#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @i: the character to be checked
 *
 * Return: 1 if i is lowercase, 0 otherwise
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
