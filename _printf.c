#include "holberton.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;

	int i, j, a;
	int counter = 0;

	va_start(ap, format);
	a = edge_cases(format, ap);
	if (a < 0)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 10; j++)
			{
				if (format[i] == *(types[j].name))
					counter += types[j].f(ap);
			}
		}
		else
			counter += write(1, &format[i], 1);
	}
	va_end(ap);
	return (counter);
}
