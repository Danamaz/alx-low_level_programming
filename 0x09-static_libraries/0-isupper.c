#include "main.h"
#include<ctype.h>

/**
 * _isupper - checks if a character is in uppercase
 *
 *@c: character to be checked
 *
 * Return: returns 1 if is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
