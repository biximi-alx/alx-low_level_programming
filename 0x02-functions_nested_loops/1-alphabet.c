#include "main.h"

/**
 * main - function prints lowercase alphabet
 *
 * Return: on success always 0
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
