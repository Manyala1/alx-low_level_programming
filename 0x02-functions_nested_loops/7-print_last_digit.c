#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - computes the last digit of a number
 *
 * @i: the number to compute the last digit of
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int j;
	
	if (i > 0)
		i = -i;

	j = i % 10;

	if (j < 0)
		j = -j;

	_putchar(j + '0');

	return (j);
}
