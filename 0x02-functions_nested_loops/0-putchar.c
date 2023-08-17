#include "main.h"

/**
 * main - Entry point 
 *_putchar - print a character
 * Return: Always 0 (Success)
 */

int main(void)
{
	char m[] = "_putchar";
	int a;

	for (a = 0; m[a] != '\0'; a++)
	{
		_putchar(m[a]);
	}
	_putchar('\n');
	return (0);
}
