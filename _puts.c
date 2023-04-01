#include "main.h"

/**
 * _print_null - Prints the string "(null)" to standard output
 *
 * Return: The number of characters printed
 */
int _print_null(void)
{
	char *str = "(null)";
	unsigned int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
/**
 * _puts - writes a string to stdout
 * @str: the string to write
 *
 * Return: the number of characters written
 */
int _puts(char *str)
{
	int count = 0;

	if (!str)
	{
		count += _print_null();
	}
	else
	{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	}
	return (count);
}
