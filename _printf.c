#include "holberton.h"

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	unsigned int final_count = 0;
	va_list arguments;

	if(!format || arguments == NULL)
	{
		return (-1);
	}
	if (format[0] == '%' && !format[1])
	{
		return (-1);
	}
	else
	{
		va_start(arguments, format);
		final_count = fx( );
	}
	va_end(arguments);
	return(final_count)
}
