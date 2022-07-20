#include "main.h"

int check_prime(int, int);

/**
 * is _prime_number - prime identiffier
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - it cheacks prime numbers
 * @n: number
 * @i: iterator
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print(1);
	return (check_prime(n, i + 1));
}
