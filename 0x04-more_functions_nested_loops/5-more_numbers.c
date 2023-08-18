#include "main.h"

/**
 *more_numbers - Prints 10 times the numbers from 0 to 14
 *
 *Return: Always 0.
 */

void more_numbers(void)
{
	int i,j,n;
	char m[] = "1011121314";
	char x[] = "0123456789";

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; x[i] != '\0'; i++)
	{
	_putchar(x[i]);
	}
	for (n = 0; m[n] != '\0'; n++)
	{
	_putchar(m[n]);
	}
	_putchar('\n');
	}
}
