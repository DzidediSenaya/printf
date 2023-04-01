#include "main.h"

/**
* handle_specifier - handles the format specifier of a printf-like function
* @format: the format specifier to handle
* @args: the va_list of arguments passed to the function
*
* Return: the number of characters printed
*/
int handle_specifier(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
	case 'c':
		count += _putchar(va_arg(args, int));
		break;
	case 's':
		count += _puts(va_arg(args, char *));
		break;
	case 'd':
	case 'i':
		count += _putint(va_arg(args, int));
		break;
	case '%':
		count += _putchar('%');
		break;
	case '\0':
		va_end(args);
		return (-1);
	default:
		count += _putchar('%');
		count += _putchar(*format);
		break;
	}
	return (count);
}
