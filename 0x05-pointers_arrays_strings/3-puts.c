#include "main.h"

/**
 * _puts - a function with an argument.
 * Description: prints a string followed by a new line
 *
 * @str: pointer variable
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
