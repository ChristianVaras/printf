#include "main.h"

/**
* new_line - function that prints a char
* @arg: parameter
* @return: number of char ptinted
*/
int new_line(va_list arg)
{
	(void)arg;
	_putchar('\n');
	return (1);
}

/**
* print_percent - function that prints %
* @arg: argument of type va_list
* @return: number of char printed
*/
int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
