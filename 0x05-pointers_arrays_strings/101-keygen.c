#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generatePassword - Generates a random valid password.
 */
void generatePassword(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	
	srand(time(NULL));
	
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	
	password[PASSWORD_LENGTH] = '\0';
	
	printf("Generated Password: %s\n", password);
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	generatePassword();
	
	return (0);
}
