#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in
 * the year, talking of leap years into account
 * Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %2d/%2d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining__days(month, day, year);

	return (0);
}
