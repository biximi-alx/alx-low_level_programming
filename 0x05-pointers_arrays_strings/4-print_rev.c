#include "main.h"
#include <string.h>

/**
 * print_rev - this function prints a reverse string
 *
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int hotit;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
