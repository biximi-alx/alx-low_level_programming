#include <stdio.h>

/**
 * _isdigit - function testig for digit through 0 to 9
 * @c: - integer to be checked
 * Return: 1 if it is a digit & 0 if not
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
