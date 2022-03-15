#include "holberton.h"

/**
 * convert_decimal_to_octal - desc
 * @num: ...
 *
 * Return: octal number converted
 */
size_t convert_decimal_to_octal(size_t num)
{
        size_t octal = 0;
        size_t i = 1;

        while (num != 0)
        {
                octal += (num % 8) * i;
                num = num / 8;
                i *= 10;
        }

        return (octal);
}
