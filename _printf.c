#include "holberton.h"
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
		{NULL, NULL}
	};
	int i = 0;
	int printed;

	while (f_list[i].c != NULL)
	{
		if (f_list[i].c[0] == c)
		{
			return (printed);
		}
		else
		{

		}
	}
	return (-1);
}

/**
 * parser - function that will parse the given format
 * and count how many chars are printed
 * it will also call the function that match the format specifier
 * @format: *pointer to the given format
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
				_putchar(*(format + i));
			}
			else
			{
				printed_chars = printed_chars + sum;
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
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	int final_count = 0;
	va_list arguments;

	/* if format not exit --> return -1*/
	/* else call parser */
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
		final_count = parser(format, arguments);
	}

	va_end(arguments);

	return(final_count)
}
