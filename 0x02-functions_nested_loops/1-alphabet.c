#include "main.h"

/**
 *main - prints_alphabet
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
