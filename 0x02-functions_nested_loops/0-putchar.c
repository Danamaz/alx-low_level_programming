#include "_putchar.c"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char m[] = "_putchar";
	int a;

	for (a = 0 ; m[a] !='\0' ;a++)
	{
		_putchar(m[a]);
	}
	return (0);
}
