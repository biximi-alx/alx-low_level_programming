#include "main.h"

/**
 *print_alphabet -> prints the lowercase alphabets
 *
 * Return: on success 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
