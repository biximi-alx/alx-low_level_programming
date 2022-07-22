#include "main.h"

/**
<<<<<<< HEAD
 * _print_rev__recursion - print a string in reverse
=======
 * _print_rev_recursion - print a string in reverse
>>>>>>> ddc5f6ea763eec8b5a081123701b638566ec24de
 * @s: pointer block of memory to fill
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
