#include "main.h"
#include <stdlib.h>

/**
 *print_diagonal - it draws a diagonal  line
 *@n: value to work with
 *Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= abs(n); i++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
