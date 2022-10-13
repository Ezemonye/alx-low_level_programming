#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...);
{
	if (n == 0)
	{
		return (0);
	}
	else
		va_list ap;
		int i, sum;

		va_start(ap, n);

		sum = 0;
		for (i = 0, i < n, i++)
			sum += va_arg(ap, int);

		va_end(ap);
		return (sum);
}
