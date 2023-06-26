#include <stdio.h>
#include "main.h"

/**
 * swap_int - take in two variables integers and swap them
 *
 * @a: swaps and stores address of b
 * @b swaps and tores address of a
 *
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
