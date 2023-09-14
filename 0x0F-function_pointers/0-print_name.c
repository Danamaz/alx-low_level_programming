#include "function_pointers_h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @*name: A pointer to a string containing the name to print
 * @f: a pointer to a funtion that takes a pointer to character array
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
