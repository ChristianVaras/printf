#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
/**
 *
 *
 */

typedef struct Ftype
{
	char *c;
	int(*f)(va_list);
}f_type;

#endif
