#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <cmath.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastD = abs(n % 10);
	if (LastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastD);
	}
	if (LastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastD);
	}
	if (LastD < 6 && LastD > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastD);
	}
	return (0);
}
