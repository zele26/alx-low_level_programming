#include <stdio.h>

/**
 * main - prints the argumets it receives followed by newline
 * @argc: takes in an integer
 * @argv: takes in string
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
