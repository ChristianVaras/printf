#include <holberton.h>

/**
 * print_char: print a char at printf
 * @list: the main string passed to the function
 * Return: An integer
 */

int print_char(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	_putchar(c);
	/* return true */
	return (1);
}
/**
 *
 *
 */

int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str == "(null)";
	}
	while ( str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
