#include <stdio.h>

/**
 * main - entry point of the program
 *
 * description: prints lowercase alphabets in reverse
 *
 * return: always 0 (success)
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
