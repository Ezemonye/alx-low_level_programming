#include "main.h"

/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
	return (dest);
}
