#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point of program
 *
 * Description: prints diagonals
 * @x: size of the triangle
 *
 * Return: void
 */
void print_triangle(int x)
{
	int row, hashes, spaces;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= x; row++)
		{
			for (spaces = x - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
