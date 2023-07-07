#include <stdio.h>
#include "main.h"

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
