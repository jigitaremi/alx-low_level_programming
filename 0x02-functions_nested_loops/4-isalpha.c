#include <stdio.h>
#include "main.h"

/**
 * _isalpha - this function checks for alphabet
 * @c: the character that is checked
 *
 * Return: 1 if it is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
