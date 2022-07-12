#include "main.h"

/**
 * _puts - this function prints a string, follewd by a new line
 *
 * @str: this is the input string
 */

void _puts(char *str)
{
	int hotit;

	for (hotit = 0; str[hotit] != '\0'; hotit++)
	{
		_putchar(str[hotit]);
	}
	_putchar('\n');
}
