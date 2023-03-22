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
	
	for (i = 1; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}

		_putchar('_');
	}
	_putchar('\n');
}
