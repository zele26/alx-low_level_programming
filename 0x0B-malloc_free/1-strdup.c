#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the given string and return a pointer
 * @str: takes in a string
 * Return: null if str is equal to null or pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int size, i = 0;

	size = 0;
	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	arr = malloc(size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
