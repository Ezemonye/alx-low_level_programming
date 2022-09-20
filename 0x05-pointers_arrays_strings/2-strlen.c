#include "main.h"

/**
 * _strlen - A function with a single argument
 * Description: prints the length of a string.
 *
 * @s: pointer variable
 * Return: a value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
