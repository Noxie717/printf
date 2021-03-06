#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print_form - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print_form
{
  char *t;
  int (*f)(va_list);
} print_form;

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
