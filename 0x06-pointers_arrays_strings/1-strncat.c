#include <stdio.h>
#include "main.h"

/**
 * *_strncat - fuction that concatenates two strings
 * @dest: destination of string pointer
 * @src: source of string pointer
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to dstination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, i;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length_of_string++)
	{
		dest[length_of_string] = src[i];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
