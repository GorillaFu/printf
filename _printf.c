#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format,...)
{
	va_list arg;
	char *str;
	const char *reader;
	int index;

	va_start(arg, format);
	reader = format;
	while(*reader != '\0')
	{
		if (*reader != '%')
		{
			putchar(*reader);
		}
		else
		{
			reader++;
			if (*reader != '\0')
			{
				switch (*reader)
				{
					case 's':
						str = va_arg(arg, char *);
						while (*str != '\0')
						{
							putchar(*str);
							str++;
						}
						break;
					case 'c':
						index = va_arg(arg, int);
						putchar(index);
						break;
					case '%':
						putchar('%');
						break;
				}
			}
		}
	reader++;
	}
	va_end(arg);
	return (0);
}
