#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format,...)
{
	va_list arg;
	int count;

	va_start(arg, format);

	count = vfprintf(stdout, format, arg);

	va_end(arg);
	return (count);
}
