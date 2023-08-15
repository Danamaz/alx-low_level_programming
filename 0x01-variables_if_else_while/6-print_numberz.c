#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int i;
	char m[] = "0123456789";

	for (i = 0; m[i] != '\0'; i++)
	{
		putchar(m[i]);
	}
	putchar('\n');
	return (0);
}
