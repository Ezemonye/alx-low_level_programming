#include "main.h"

/**
 * _strlen - A function with a single argument
 * DFescription: prints the length of a string.
 *
 * @s: pointer variable
 * @i: variable of integer type 
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
