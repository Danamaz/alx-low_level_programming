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
	char m[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; m[i] != '\0'; i++)
	{
		putchar(m[i]);
	}
	for (i = 0; m[i] != '\0'; i++)
	{
		putchar(toupper(m[i]));
	}
	putchar('\n');
	return (0);
}
