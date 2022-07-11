#include "main.h"

/**
 * swap_int - given two integers swap the values they are holding
 * @a: parameter_1
 * @b: parameter_2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
