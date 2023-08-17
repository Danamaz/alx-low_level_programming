#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Compute the last digit of a number
 *
 * @a: Value to be used
 * Return: the last digit.
 */

int print_last_digit(int a)
{
	int c = abs(a % 10);

	_putchar(c + '0');
	return (c);
}
