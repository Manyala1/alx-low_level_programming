#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for loercase character
 *
 * @c: character to be checked
 *
 * return: 1 for upppercase character or
 * 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
