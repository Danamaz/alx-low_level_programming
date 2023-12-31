#include "main.h"
#include<ctype.h>

/**
 * print_sign - checks if a character is a letter
 *
 * @n: number to be checked
 *
 * Return: 1 ,0 or -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		{
		_putchar('-');
		return (-1);
		}
	return (0);
}
