#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * times_table - function to print 0-9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			product = i * j;
			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
			_putchar('\n');
	}
}
