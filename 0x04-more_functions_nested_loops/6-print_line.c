#include "main.h"

/**
 *print_line - it draws a line
 *@n: value to work with
 *Return: Always 0.
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (j = 0; j < n; j++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
