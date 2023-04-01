#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: the number of characters written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
