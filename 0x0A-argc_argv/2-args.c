#include <stdio.h>
#include "main.h"

/**
 * main - entry point of program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
