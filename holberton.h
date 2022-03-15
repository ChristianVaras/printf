#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct Ftype - Define a structre for format
 *
 * @c: Parameter char(%c, %s, %i, ...)
 * @f: Associated function
 */

typedef struct Ftype
{
	char *c;
	int(*f)(va_list);
}match_id;

typedef struct Ftype match_id;

/* main functions */
int _printf(const char *format, ...);

/* aux functions */
int _putchar(char c);

#endif
