#include "holberton.h"

/**
 * _printf - asd
 * @format: asd
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list_arg;
	va_start(list_arg, format);

	write(1, format, strlen(format));

	va_end(list_arg);
	return (0);
}
