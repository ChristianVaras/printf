#include "main.h"

/**
 * print_octal - Converts a decimal num passed to the argument to an octal
 * num
 * @arg: The num to be converted
 * Return: c of digit in octal num
 */
int print_octal(va_list arg)
{
	unsigned int num, c = 0, index = 0;
	int arr[100];

	num = va_arg(arg, int);
	if (num < 9)
	{
		_putchar(num + '0');
		c = 1;
	}
	else if (num >= 9)
	{
		while (num > 0)
		{
			arr[index] = num % 8;
			num /= 8;
			index++;
		}
	}
	while (index--)
	{
		_putchar(arr[index] + '0');
		c++;
	}
	return (c);
}

/**
 * print_hexadecimal - Converts decimal to uppercase hexadecimal
 * @n: The number to be converted
 *
 * Return: The number of digits printed
 */
int print_hexadecimal(unsigned int n)
{
	int counter = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		counter += print_hexadecimal(n / 16);
	counter += _putchar(hex_digits[n % 16]);
	return (counter);
}

/**
 * print_HEXADECIMAL - Converts decimal to uppercase hexadecimal
 * @n: The number to be converted
 *
 * Return: The number of digits printed
 */
int print_HEXADECIMAL(unsigned int n)
{
	int counter = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (n >= 16)
	{
		counter += print_HEXADECIMAL(n / 16);
	}
	counter += write(1, &hex_digits[n % 16], 1);
	return (counter);
}

/**
 * print_hex - Converts decimal to uppercase hexadecimal
 * @arg: The number of list to be converted
 *
 * Return: The number of digits printed
 */
int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, int);

	return (print_hexadecimal(n));
}

/**
 * print_HEX - Converts decimal to uppercase hexadecimal
 * @arg: The number of list to be converted
 *
 * Return: The number of digits printed
 */
int print_HEX(va_list arg)
{
	unsigned int n = va_arg(arg, int);

	return (print_HEXADECIMAL(n));
}
/**
* print_bin - Converts unsigned int argument to binary
* @arg: The decimal number to be converted
* Return: Binary number
*/
int print_bin(va_list arg)
{
	unsigned int n, a = 0, i = 0;
	int arr[100];

	n = va_arg(arg, int);
	if (n < 2)
	{
		_putchar(n + '0');
		a = 1;
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
		a++;
	}
	return (a);
}
