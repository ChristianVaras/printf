#include "main.h"

/**
 * print_char - print a char at printf
 * @arg: the main string passed to the function
 *
 * Return: 1
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
 * print_string - print a string at printf
 * @arg: the main string passed to the function
 *
 * Return: The length of the string
 */
int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
* print_rev - function that prints string in reverse
* @arg: argument of type va_list
* Return: length of printed string
*/
int print_rev(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}
