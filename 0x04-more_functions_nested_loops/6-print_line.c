#include <stdio.h>
#include "main.h"

/**
 * print_line - function to draw a straight line
 * @n: number of character - to be drawn
 *
 * Return: Void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
