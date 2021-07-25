#include "holberton.h"

int _printf_literal(const char *format)
{
	int i;
	for (i = 0; format[i];)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	return (strlen(format));
}
int _printf_s(va_list s)
{
	char *str = va_arg(s, char *);
	write(1, str, strlen(str));
	return (0);
}
int _printf_c(va_list c)
{
	return (0);
}
int _printf_d(va_list d)
{
	return (0);
}
int _printf_i(va_list i)
{
	return (0);
}
