#include <unistd.h>

/**
 * _putchar - displays the character c
 * @c: the character to be printed
 *
 * Return: 1 if successful, -1 if not 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
