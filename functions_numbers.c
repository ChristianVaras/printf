#include "main.h"

/**
 * print_int - print an integer at printf
 * @arg: the main number passed to the function
 *
 * Return: Size of the integer
 */
int print_int(va_list arg)
{
	int i, d;

	d = va_arg(arg, int);

	i = print_number(d);

	return (i);
}

/**
 * print_unsigned_int - print an unsigned integer at printf
 * @arg: the main number passed to the function
 *
 * Return: Size of the unsigned integer
 */
int print_unsigned_int(va_list arg)
{
	int i;
	unsigned int u;

	u = va_arg(arg, unsigned int);

	i = print_number_ui(u);

	return (i);
}

/**
 * print_octal_ui - print an octal unsigned integer at printf
 * @arg: the main number passed to the function
 *
 * Return: Size of the octal unsigned integer
 */
int print_octal_ui(va_list arg)
{
	int i;
	size_t o;

	o = va_arg(arg, size_t);

	o = convert_decimal_to_octal(o);

	i = print_number_size_t(o);

	return (i);
}
