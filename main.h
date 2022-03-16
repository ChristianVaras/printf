#ifndef MAIN_H
#define MAIN_H
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
	int (*f)(va_list);
} match_id;

/* helper and initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, va_list arguments);
int select_functions(char c, va_list arguments);

/* format conversion functions */
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_unsigned_int(va_list arg);
int print_octal_ui(va_list arg);
int print_hex_minus(va_list arg);
int print_hex_mayus(va_list arg);

/* Auxiliar functions to print different size types of numbers*/
int print_number(int n);
int print_number_ui(unsigned int n);
int print_number_size_t(size_t n);

/* number conversions functions*/
size_t convert_decimal_to_octal(size_t num);

/* escape conversion functions */
int new_line(va_list arg);
int print_percent(va_list arg);
int print_tab(va_list arg);

#endif
