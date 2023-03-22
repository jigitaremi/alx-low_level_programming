#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function to print lines diagonally
 * @n: number of lines to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
