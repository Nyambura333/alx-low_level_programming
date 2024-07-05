#include "main.h"


/**
 * print_alphabet - Prints the alphebet in lowercase
 *
 * Desription: Prints the alphabet from 'a' to 'z' using only _putchar
 * Return: void (no return value)
 */

void print_alphebet(void)
{
	char letter = 'a';


	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
