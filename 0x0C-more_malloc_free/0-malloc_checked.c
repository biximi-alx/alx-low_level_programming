#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - checks whether malloc succeeded
 * @b: number of bits to use
 * Return: pointer to address or 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *tk = malloc(b);

	if (tk == NULL)
		exit(98);
	return (tk);
}
