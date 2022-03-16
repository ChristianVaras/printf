#include "main.h"

/**
 * print_hex - print a hexadecimal number at printf in lowercase
 * @arg:  the main number passed to the function
 *
 * Return: Size of the hexadecimal number
 */
int print_hex(va_list arg)
{
	unsigned int x, remainder = 0;
	int i, j, count = 0;
	char hex[8];

	x = va_arg(arg, unsigned int);

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
 * print_HEX - print a hexadecimal number at printf in uppercase
 * @arg: the main number passed to the function
 *
 * Return: Size of the hexadecimal number
 */
int print_HEX(va_list arg)
{
	unsigned int x, remainder = 0;
	int i, j, count = 0;
	char hex[8];

	x = va_arg(arg, unsigned int);

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
#include "main.h"
/**
 * convert_decimal_to_octal - desc
 * @num: ...
 *
 * Return: octal number converted
 */
unsigned long convert_decimal_to_octal(unsigned long num)
{
	unsigned long octal = 0;
	unsigned long i = 1;

        while (num != 0)
        {
                octal += (num % 8) * i;
                num = num / 8;
                i *= 10;
        }
	while (num != 0)
	{
		octal += (num % 8) * i;
		num = num / 8;
		i *= 10;
	}

	return (octal);
}

int print_octal(va_list arg)
{
	int i;
	unsigned long o;

	o = va_arg(arg, unsigned long);

	o = convert_decimal_to_octal(o);

	i = print_number_ul(o);

	return (i);
}
#include "main.h"

/**
* print_bin - Converts unsigned int argument to binary
* @lista: The decimal number to be converted
* Return: Binary number
*/
int print_bin(va_list arg)
{
	unsigned int n, count = 0, i = 0;
	int arr[100];

	n = va_arg(arg, int);
	if (n < 2)
	{
		_putchar(n + '0');
		count = 1;
	}
	else if (n >= 2)
	{
		while (n > 0)
		{
			arr[i] = n % 2;
			n /= 2;
			i++;
		}
	}
	while (i--)
	{
		_putchar(arr[i] + '0');
		count++;
	}
	return (count);
}
