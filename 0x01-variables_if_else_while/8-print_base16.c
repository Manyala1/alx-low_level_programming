#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48; /48; decimal rep of 0/

	while (i <= 102) /102; decimal rep of f/
	{
		putchar(i);

		/* after 9 we jump till 96; `*/
		if (i == 57)
			i += 39;
		++i;
	}
	putchar('\n');
	return (0);
}
