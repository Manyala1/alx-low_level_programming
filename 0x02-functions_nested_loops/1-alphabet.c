#include <stdio.h>
#include "main.h"

/**
 * main - entry point of program
 *
 * description: prints alphabet in lowercase
 *
 * return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
