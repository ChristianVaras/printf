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

/* helper and initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parse(const char *format, va_list arguments);

/* format conversion functions */
int print_char(va_list c);
int print_string(va_list c);

/* escape conversion functions */
int new_line(va_list arg);

#endif
