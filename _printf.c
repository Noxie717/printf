#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int char_num;
	print_form spec_list[] = {
				  {"c", _putchar},
				  {"s", _puts},
				  {"%", print_p},
				  {NULL, NULL}
	};
	va_list spec_list;

	if (format == NULL)
		return (-1);

	va_start(spec_list, format);
	char_num = param(format, spec_list);
	va_end(spec_list);
	return (char_num);
}
