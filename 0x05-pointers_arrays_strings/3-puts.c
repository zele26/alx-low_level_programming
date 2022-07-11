#include "main.h"

/**
 * _puts - a function tht prints a string
 * @str : string to be printed
 * Return :nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
