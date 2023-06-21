#include <stdio.h>
#include "main.h"
/**
 * int _abs - executes absolute value of integer
 *
 * @i: the integer to check
 *
 * return: absolute value of int
 */
int _abs(int i)
{
	if (i >= 0)
		return(i);
	else
		return(-i);
}
