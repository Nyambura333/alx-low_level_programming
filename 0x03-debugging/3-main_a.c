#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	{
		int month = 4;
		int day = 1;
		int year = 1997;

		print_remaining_day(4, 1, 1997);
		return (0);
	}

#ifndef MAIN_H
#define MAIN_H

void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
}
