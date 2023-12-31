#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - compute for the sum of numbers
 * @n: number of items to
 * @...: the numbers or items
 * Return: return the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	if (n == 0)
	return (0);
	else
	return (sum);
}
