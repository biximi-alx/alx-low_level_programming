#include "main.h"

/**
 * _print_rev__recursion - print a string in reverse
 * @s: pointer block of memory to fill
 *
 * Return: void
 */
void _print_rev_recusion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
