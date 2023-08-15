#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char m[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; m[i] != '\0'; i++)
	{
		putchar(m[i]);
	}
	putchar('\n');
	return (0);
}
