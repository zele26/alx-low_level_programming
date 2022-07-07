#include "main.h"

/**
 * print_line - prints n number of _
 * prints \n if n is less than 0
 * @n: is the number that decide the number of _
 * Return: doesnt return
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
