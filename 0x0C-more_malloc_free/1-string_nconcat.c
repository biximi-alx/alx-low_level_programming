#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numer of bytes from s2 to be copied
 * Return: pointer to concatenated string or NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, z, size, len1, len2;
	char *tk;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	tk = malloc(sizeof(char) * size + 1);
	if (!tk)
		return (NULL);
	for (m = 0; m < len1; m++)
		tk[m] = s1[m];
	for (z = 0; z < n; z++, m++)
		tk[m] = s2[z];
	tk[m] = 0;
	return (tk);
}

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int m;

	for (m = 0; string[m] != '\0'; m++)
		;
	return (m);
}
