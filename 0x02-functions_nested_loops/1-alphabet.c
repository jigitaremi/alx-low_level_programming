#include <stdio.h>

#include "main.h"

/**
 * main - to print out a to z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
