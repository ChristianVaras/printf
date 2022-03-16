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

	return (octal);
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
