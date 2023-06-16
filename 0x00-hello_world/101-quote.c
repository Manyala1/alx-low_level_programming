#include <stdio.h>
#include <unistd.h>

/**
 * main - entry of the program
 *
 * program prints the last part of the line, followed by new line after the standard error
 *
 * rturn: 1 when succcess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
