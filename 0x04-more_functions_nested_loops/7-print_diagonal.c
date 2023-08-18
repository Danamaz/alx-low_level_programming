#include "main.h"
#include <stdlib.h>

/**
 *more_numbers - it draws a horizontal line 
 *@n: value to work with

 *Return: Always 0.
 */

void print_diagonal(int n)
{
	for( i = 0;i <= abs(n); i++)
{
	_putchar(' ');
}
	_putchar('\\');     
}
