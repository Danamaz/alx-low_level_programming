#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array  - it creates an array of chars
 * @size: size of space to allocate
 * @c: the character to fill the array with
 *
 * create_array  - it creates an array of chars
 * @size: size of space to allocate
 * @c: the character to fill the array with
 *
 * Return: it returns  the array after allocation of space
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
	return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
