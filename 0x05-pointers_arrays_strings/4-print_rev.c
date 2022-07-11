#include "main.h"

/**
 * print_rev - display the string in a reverse way
 * @s : store the values of the given string
 * Return : nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
