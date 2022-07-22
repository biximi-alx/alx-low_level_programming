#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: on success
 */
int main (int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
