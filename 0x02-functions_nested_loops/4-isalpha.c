#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if c is a letter
 *
 *@c: character to be checked
 *
 * Return: returns 1 if it is letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
