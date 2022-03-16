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
	unsigned int u, tmp;

	u = va_arg(arg, unsigned int);

	tmp = u;

	if (tmp < 1)
	{
		_putchar('0');
		return (1);
	}

	i = print_number_ui(tmp);

	return (i);
}
