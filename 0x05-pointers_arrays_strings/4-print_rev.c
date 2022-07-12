#include "main.h"

/**
 * print_rev - this function prints a reverse string
 *
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int hotit;

	for (hotit = 0; s[hotit] != '\0'; hotit++)

	for (hotit = hotit - 1; s[hotit] != '\0'; hotit--)
	{
		_putchar(s[hotit]);
	}
	_putchar('\n');
}
