#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _putint(int n);
int _printf(const char *format, ...);
int handle_specifier(const char *format, va_list args);

#endif /* MAIN_H */
