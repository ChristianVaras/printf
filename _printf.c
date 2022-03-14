#include "holberton.h"

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, format);

	while(format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{

		}
		i++;
	}

}
