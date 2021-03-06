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

/* initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, va_list arguments);
int select_functions(char c, va_list arguments);

/* format conversion functions */
int print_char(va_list arg);
int print_string(va_list arg);
int print_rev(va_list arg);
int print_int(va_list arg);
int print_unsigned_int(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_bin(va_list arg);
int print_rot13(va_list arg);

/* Auxiliar functions */
int print_number(int n);
int print_number_ui(unsigned int n);
int print_number_ul(unsigned long n);
int _strlen(const char *s);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

/* number conversions functions*/
unsigned long convert_decimal_to_octal(unsigned long num);

/* escape conversion functions */
int new_line(va_list arg);
int print_percent(va_list arg);
int print_tab(va_list arg);
int print_HEXADECIMAL(unsigned int n);

#endif
