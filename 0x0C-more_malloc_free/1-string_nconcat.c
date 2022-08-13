#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 * Return: If memory allocation fails, return NULL. Otherwise, return a pointer
 * to the first character of the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tk;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1)
	{
		while (s1[s1_len])
			++s1_len;
	}

	if (s2)
	{
		while (s2_len < n && s2[s2_len])
			++s2_len;
	}

	tk = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!tk)
		return (NULL);

	for (n = 0; n < s1_len; ++n, ++tk)
		*tk = s1[n];

	for (n = 0; n < s2_len; ++n, ++tk)
		*tk = s2[n];

	*tk = '\0';

	return (tk - s1_len - s2_len);
}
