#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: acceptd characters
 *
 * Reeturn: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int d, f;

	for (d = 0; *(s + d); d++)
	{
		for (f = 0; *(accept + f); f++)
		{
			if (*(s + d) == *(accept + f))
			{
				break;
			}
		}
		if (*(accept + f) != '\0')
		{
			return (s + d);
		}
	}
	return (0);
}
