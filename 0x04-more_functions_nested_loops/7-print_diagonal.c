#include "main.h"

/**
 *print_diagonal - it draws a diagonal line
 *@n: value to work with
 *Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (j = 0; j < size; j++)
	{
	for (i = 0; i < size; i++)
	{
	_putchar(' ');
	}
	_putchar('\n');
	}
}
}
