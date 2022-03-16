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

/**
* print_octal - convert to ocatle
* @arg: argument
* Return: number of elements printed
*/
int print_octal(va_list arg)
{
	char *buffer;
	int len, i;
	int a;

	a = va_arg(arg, int);
	len = alloc_len(a, 8);
	buffer = malloc(sizeof(char) * len + 1);
	/* buffer holds the number of digits of the int */
	buffer = itoa(a, buffer, 8);
	buffer[len] = '\0';
	buffer = rev_string(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(*(buffer + i));
	}
	free(buffer);
	return (i);
}

/**
* print_bin - convert to binary
* @arg: argument
* Return: number of elements printed
*/
int print_bin(va_list arg)
{
	char *buffer;
	unsigned int len, i, a;

	a = va_arg(arg, unsigned int);
	if (a == 0)
	{
		return (_putchar('0'));
	}
	len = alloc_len(a, 2);
	buffer = malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
	{
		return (-1);
	}
	/* buffer holds the number of digits of the int */
	buffer = itoa(a, buffer, 2);
	buffer[len] = '\0';
	buffer = rev_string(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(*(buffer + i));
	}
	free(buffer);
	return (i);
}
