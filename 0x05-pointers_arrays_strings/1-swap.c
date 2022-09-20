#include "main.h"

/**
 * swap_int - a function with two variablesx of type int
 * Description: a function that swaps two variables
 *
 * @a: first variable
 * @b: second variable
 * Resturn: value
*/
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
