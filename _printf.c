#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * _printf - prints arguments
 * @format: arguments to be printed
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	va_list arg;
	char *str;
	const char *reader;
	int index, count;
	va_start(arg, format);
	count = 0;

	while (*format != '\0')
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
						count++;
					}
					count--;
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
		count++;
	reader++;
	}
	va_end(arg);
	return (0);
}
