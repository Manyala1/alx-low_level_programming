#include <stdio.h>

/**
 * main - entry of the program
 *
 * description: prints lowercase alphabets in reverse
 *
 * return: 0 when succesfull
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
