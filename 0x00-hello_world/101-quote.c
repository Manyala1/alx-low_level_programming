#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point of the code
 *
 * Program prints the last part of the line, followed by a new line after the standard error
 *
 * Return: 1 when successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
