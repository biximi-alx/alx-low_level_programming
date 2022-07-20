#include "main.h"

/**
 * _sqrt_recursion - squareroot using recursion
 * @n: parameter to be sqaureroot
 * Return: squareroot of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive squareroot
 * @n: number
 * @i: interator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
