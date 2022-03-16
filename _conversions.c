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
