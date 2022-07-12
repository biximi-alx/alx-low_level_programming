#include "main.h"
#include <stdio.h>

/**
 * print_arry - print n elements of an arry of integers
 * @a: pointer to arry
 * @n: number of arry elements
 *
 * Return: void
 */
void print_arry(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++);
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
