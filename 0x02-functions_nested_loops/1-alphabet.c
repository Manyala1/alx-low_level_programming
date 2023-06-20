#include <stdio.h>
#include "main.h"

/**
 * main - entry point of program
 *
 * description: prints alphabet in lowercase
 *
 * return: 0 on succesfulll execution
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
