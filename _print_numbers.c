#include "main.h"

/**
 * print_number - prints an integer
 * @n: Integer to print
 *
 * Return: Size of the integer
 */
int print_number(int n)
{
        unsigned int tens, digit, positive = n;
        int size = 0;
        double t_beg = 1;

        if (n == 0)
                size += _putchar('0');
        else
        {
                if (n < 0)
                {
                        size += _putchar('-');
                        positive = n * -1;
                }

                while (t_beg <= positive)
                        t_beg *= 10;
                tens = t_beg / 10;

                while (tens >= 1)
                {
                        digit = positive / tens;
                        size += _putchar(digit + '0');
                        positive = (positive - (tens * digit));
                        tens /= 10;
                }
        }

        return (size);
}

/**
 * print_number_ui - prints an unsigned integer
 * @n: Unsigned integer to print
 *
 * Return: size of the unsigned integer
 */
int print_number_ui(unsigned int n)
{
        unsigned int tens, digit, positive = n;
        int size = 0;
        double t_beg = 1;

        if (n == 0)
                size += _putchar('0');
        else
        {
                while (t_beg <= positive)
                        t_beg *= 10;

                tens = t_beg / 10;

                while (tens >= 1)
                {
                        digit = positive / tens;
                        size += _putchar(digit + '0');
                        positive = (positive - (tens * digit));
                        tens /= 10;
                }
        }

        return (size);
}

/**
 * print_number_size_t - prints an size_t number at printf
 * @n: size_t number to print
 *
 * Return: size of the size_t number
 */
int print_number_size_t(size_t n)
{
        size_t tens, digit, positive = n;
        int size = 0;
        double t_beg = 1;

        if (n == 0)
                size += _putchar('0');
        else
        {
                while (t_beg <= positive)
                        t_beg *= 10;

                tens = t_beg / 10;

                while (tens >= 1)
                {
                        digit = positive / tens;
                        size += _putchar(digit + '0');
                        positive = (positive - (tens * digit));
                        tens /= 10;
                }
        }

        return (size);
}
