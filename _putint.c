#include "main.h"

/**
 * _putint - writes an integer to stdout
 * @n: the integer to write
 *
 * Return: the number of characters written
 */
int _putint(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n > 9)
	{
		count += _putint(n / 10);
	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
