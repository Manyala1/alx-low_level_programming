#include <stdio.h>
#include "main.h"

int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is pallindrome
 * check_pal - check if number is palindrome
 * @s: string to reverse
 * @i: iterator
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen_recursion(s)));
}

/**
 * _strlen_recursion- checks string length
 * @s: string to calculate length of
 * @len: length of string
 *
 * Return: 1 if pallindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
