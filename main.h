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
int print_int(va_list arg);
int print_unsigned_int(va_list arg);
int print_octal_ui(va_list arg);
int print_hex_minus(va_list arg);
int print_hex_mayus(va_list arg);
int print_bin(va_list arg);
int print_rot13(va_list arg);

/* Auxiliar functions */
int print_number(int n);
int print_number_ui(unsigned int n);
int print_number_ul(unsigned long n);
char *itoa(unsigned int num, char *str, int base);
int alloc_len(int num, int base);
int _strlen(const char *s);

/* number conversions functions*/
unsigned long convert_decimal_to_octal(unsigned long num);

/* escape conversion functions */
int new_line(va_list arg);
int print_percent(va_list arg);
int print_tab(va_list arg);

#endif
