#include "main.h"

/**
 * _strlen_recursion - function to get length of string
 * @s: string parameter
 * Return: length pf string
 */
int _srtlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
