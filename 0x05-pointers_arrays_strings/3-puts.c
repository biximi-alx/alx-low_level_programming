#include "main.h"

/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout
 *
 * @str; this is my input string
 */
void _puts(char *str)
{
	int brim;

	for (str = 0; str[brim] != '\0' ; brim++)
	{
		_putchar(str[brim]);
	}
	_putchar('\n');
}
