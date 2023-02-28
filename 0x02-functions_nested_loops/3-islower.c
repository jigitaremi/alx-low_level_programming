#include <stdio.h>
#include "main.h"

/**
 * _islower - this function checks if a character is in lowercase
 * @c: the parameter to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
