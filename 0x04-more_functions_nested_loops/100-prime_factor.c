#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	long long int n = 612852475144;
	long int div = 2, maxFact;

	while (n != 0)
	{
	if (n % div != 0)
	div = div + 1;
	else
	{
	maxFact = n;
	n = n / div;
	if (n == 1)
	{
	printf ("%lld ", maxFact);
	break;
	}
	}
	}
	return (0);
}
