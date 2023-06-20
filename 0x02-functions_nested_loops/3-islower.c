#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if character is in lowercase
 *
 * @i: character being checked
 *
 * return: 1 if character is lowercase,
 * otherwise 0
 */
int _islower(int i)
{
	if (i >= 'a && i <= 'z')
		return (1);
	else 
		return (0);
}
