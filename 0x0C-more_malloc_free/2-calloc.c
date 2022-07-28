#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to a memory area
 * @b: the byte to write to memory
 * @n: the number of bytes to write
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; ++m)
		s[m] = b;
	return (s);
}


/**
 * _calloc - dynamically allocate memory for an array and initialize it to zero
 * @nmemb: the number of array members
 * @size: the size of each array member
 *
 * Return: If memory allocation fails or either argument is zero, return NULL.
 * Otherwise, return a pointer to the newly allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tk;

	if (!(nmemb && size))
		return (NULL);

	tk = malloc(nmemb * size);
	if (!tk)
		return (NULL);

	_memset(tk, 0, nmemb * size);

	return (tk);
}
