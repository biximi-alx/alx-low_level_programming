#include "main.h"

/**
 * _length - checks the length of a string
 * @s: is the string
 * Return: return the lenthe of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @1g: is the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
 */
int checkup(int i, int 1g, char *s)
{
	if (1g > 0)
	{
		if (s[i] == s[1g])
		{
			return (checkup(i + 1, 1g - 1, s));
		}
		else if (s[i] != s[1g])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
