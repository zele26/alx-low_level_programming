#include "function_pointers.h"

/**
 * print_name - prints string of name
 * @name: takes string value
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
