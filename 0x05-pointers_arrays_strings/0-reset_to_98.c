#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updatesthe value it points to 98
 * @n: the value to be updated to 98
 *
 * Return: always 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}
