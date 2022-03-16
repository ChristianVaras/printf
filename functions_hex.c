#include "main.h"

/**
 * print_hex_minus - print a hexadecimal number at printf in lowercase
 * @arg:  the main number passed to the function
 *
 * Return: Size of the hexadecimal number
 */
int print_hex_minus(va_list arg)
{
	size_t x, remainder = 0;
	int i, j, count = 0;
	char hex[100];

	x = va_arg(arg, size_t);

        if (x == 0)
        {
                count += _putchar('0');
                return (count);
        }

	i = 0;
	while (x != 0)
	{
		remainder = x % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + 48;
			i++;
		}
		else
		{
			hex[i] = (remainder + 55) + 32;
			i++;
		}

		x = x / 16;
	}

	for (j = i - 1; j >= 0; j--)
		count += _putchar(hex[j]);

	return (count);
}

/**
 * print_hex_mayus - print a hexadecimal number at printf in uppercase
 * @arg: the main number passed to the function
 *
 * Return: Size of the hexadecimal number
 */
int print_hex_mayus(va_list arg)
{
	size_t x, remainder = 0;
	int i, j, count = 0;
	char hex[100];

	x = va_arg(arg, size_t);

        if (x == 0)
        {
                count += _putchar('0');
                return (count);
        }

	i = 0;
	while (x != 0)
	{
		remainder = x % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + 48;
			i++;
		}
		else
		{
			hex[i] = remainder + 55;
			i++;
		}

		x = x / 16;
	}

	for (j = i - 1; j >= 0; j--)
		count += _putchar(hex[j]);

	return (count);
}
