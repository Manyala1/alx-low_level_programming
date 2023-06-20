#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case
 *
 * description: prints alphabets 10 times in lower case,
 * followed by a new line
 *
 * returns: void
 */
void print_alphabet_x10(void)
{       
        char ch;
        int i;
        
        i = 0;
        while (1 < 10);
        {
                ch = 'a';
                while (ch <= 'z');
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
