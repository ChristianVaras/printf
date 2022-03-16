#include "main.h"
/**
 * select_functions - function that matches the format
 * @c: conversion specifiers
 * @arguments: pointer to arguments
 * Return: the number of printed chars
**/
int select_functions(char c, va_list arguments)
{
	match_id f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},

		{NULL, NULL}
	};
	int i = 0;
	int printed;
	int (*ptr_frmt)(va_list);

	while (f_list[i].c != NULL)
	{
		if (f_list[i].c[0] == c)
		{
			ptr_frmt = f_list[i].f;
			printed = ptr_frmt(arguments);
			return (printed);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}

/**
 * parser - function that will parse the given format
 * and count how many chars are printed
 * it will also call the function that match the format specifier
 * @format: *pointer to the given format
 * @arguments: *pointer to arguments
 * Return: the number of printed chars count1
**/
int parser(const char *format, va_list arguments)
{
	char specifier;
	int i, sum;
	int printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (*(format + i) == '%' || *(format + i) == '\\')
		{
			specifier = *(format + i + 1);
			sum = select_functions(specifier, arguments);
			if (sum == -1) /* no match was found */
			{
			/* specifier is not defined just print the % and char */
				_putchar(*(format + i));
				_putchar(*(format + i + 1));
				printed_chars = printed_chars + 2;
				i++;

				if (*(format + i) == '\0')
				{
					return (-1);
				}
			}
			else
			{
				printed_chars = printed_chars + sum;
				i++;
				if (*(format + i) == '\0')
				{
					return (-1);
				}
			}
		}
		else
		{
			_putchar(*(format + i));
			printed_chars++;
		}
	}
	return (printed_chars);
}
/**
 * _printf - function that produces output according to a format.
 * @format: is a character strings
 * Return: count of characters in format
 */
int _printf(const char *format, ...)
{
	int final_count = 0;
	va_list arguments;

	/* if format not exit --> return -1*/
	/* else call parser */
	if (!format || arguments == NULL)
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
		final_count = parser(format, arguments);
	}

	va_end(arguments);

	return (final_count);
}
