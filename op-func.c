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
	return (strlen(str));
}
int _printf_c(va_list c)
{
	int cstr = va_arg(c, int);
	write(1, &cstr, 1);

	return (1);
}
int _printf_d(va_list d)
{
	(void)d;
	return (0);
}
int _printf_i(va_list i)
{
	(void)i;
	return (0);
}
int _printf_per(va_list p)
{
	(void)p;
	_putchar('%');
	return (0);
}
