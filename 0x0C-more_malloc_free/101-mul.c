#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * int_calloc - special calloc but 4 int arrays
  * @nmemb: n memb
  * @size: size of array
  * Return: int *
  */
int *int_calloc(int nmemb, unsigned int size)
{
	/* declarations */
	int *v, q;
	/* checking inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* malloc the space & check for fail */
	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);
	/* calloc */
	for (q = 0; q < nmemb; q++)
		v[q] = 0;
	return (v);
}

/**
  * mult - multiplication
  * @product: int * 4 answer
  * @n1: string num1
  * @n2: string num2
  * @len1: len num1
  * @len2: len num2
  * Return: void
  */
void mult(int *product, char *n1, char *n2, int len1, int len2)
{
	/* declarations */
	int r;
	int n;
	int b1, b2;
	int sum;
	/* the long math */
	for (r = len1 - 1; r >= 0; r--)
	{
		sum = 0;
		b1 = n1[r] - '0';
		for (n = len2 - 1; n >= 0; n--)
		{
			b2 = n2[n] - '0';
			sum += product[r + n + 1] + (b1 * b2);
			product[r + n + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			product[r + n + 1] += sum;
	}
	for (r = 0; product[r] == 0 && r < len1 + len2; r++)
	{}
	if (r == len1 + len2)
		_putchar('0');
	for (; r < len1 + len2; r++)
		_putchar(product[r] + '0');
	_putchar('\n');
}

/**
  * is_valid - is the number a valid one
  * @num : char string num
  * Return: int, 1 if true 0 if false
  */
int is_valid(char *num)
{
	/* declarations */
	int m;
	/* checking for ints */
	for (m = 0; num[m]; m++)
	{
		if (num[m] < '0' || num[m] > '9')
			return (0);
	}
	return (1);
}
/**
  * err - errors r us
  * @status: error code 4 exit
  * Return: void
  */
void err(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}
/**
  * main - getting the args
  * @argc: args #
  * @argv: arg array
  * Return: 0
  */
int main(int argc, char **argv)
{
	/* declarations */
	int z, m, len1 = 0, len2 = 0;
	int *res;
	/* too many args? too few? */
	if (argc != 3)
	{
		err(98);
	}
	/* using isvalid */
	for (z = 1; z < argc; z++)
	{
		if (!(is_valid(argv[z])))
			err(98);
		if (z == 1)
		{
			for (m = 0; argv[z][m]; m++)
				len1++;
		}
		if (z == 2)
		{
			for (m = 0; argv[z][m]; m++)
				len2++;
		}
	}
	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);
	mult(res, argv[1], argv[2], len1, len2);
	free(res);
	return (0);
}
