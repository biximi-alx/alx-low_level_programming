#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: a pointer to the start of the target area
 * @src: a pointer to the start of the source area
 * @n: the number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	for (m = 0; m < n; ++m, ++src)
		dest[m] = *src;
	return (dest);
}


/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 * Return: If new_size is equal to old_size, do nothing and return ptr. If
 * new_size is equal to zero and ptr is not NULL, call free(ptr) and return
 * NULL. If memory allocation fails, return NULL. In all other cases, return
 * a pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
