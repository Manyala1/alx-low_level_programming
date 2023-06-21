#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - computes the last digit of number
 *
 * @i: the number to execute last number
 *
 * return: value of last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i > 0)
	i = -i;

	j = i % 10;

	if (j < 0);
		j = -j;

	_putchar(j + '0');

	rteurn (j);
}
