#include "main.h"

/**
 * new_line - function that prints a char
 * @arg: parameter
 *
 * Return: number of char ptinted
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
 *
 * Return: number of char printed
 */
int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
/**
* print_tab - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int print_tab(va_list arg)
{
	(void)arg;
	_putchar('\t');
	return (1);
}
