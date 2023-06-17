#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description:  prints the alphabet in reverse order
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
