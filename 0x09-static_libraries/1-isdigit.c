#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if a character is a digit or not
 *
 *@c: character to be checked
 *
 * Return: returns 1 if it a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
