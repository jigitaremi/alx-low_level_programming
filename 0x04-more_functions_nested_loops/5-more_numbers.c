#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, num;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
