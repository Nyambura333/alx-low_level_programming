#include "main.h"                                                  /**                                                                 * puts_half - a function the prints half of a string
 * if odd len, n = (length_of_the_string -1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{                                                                          int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
