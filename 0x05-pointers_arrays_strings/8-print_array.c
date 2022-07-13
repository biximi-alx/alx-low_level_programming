#include "main.h"
#include <stdio.h>
/**
 * print_arry - prints n elements of an array of integers.
 * @a: pointer to array.
 * @n: number of array elements.
 *
 * Return: return on success 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
