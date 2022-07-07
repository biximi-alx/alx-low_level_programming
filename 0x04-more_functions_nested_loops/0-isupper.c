#include "main.h"

/**
 *_isupper - checks if a letter is upper case
 *@m: the number to be checked
 * Return: give 1 or 0
 */
int _isupper(int m)
{
	if (m >= 'A' && m <= 'Z')
	{
		return (1);
	}
	return (0);
}
