#include "holberton.h"
#include <stdio.h>

/**
 * _printf_r - function that prints a reverse string
 * @r: va_list
 * Return: string's length
 */

int _printf_r(va_list r)
{
	char *str = va_arg(r, char *);

	if (str == NULL)
		str = ")llun(";

	_print_rev_recursion(str);

	return (_strlen(str));
}

/**
 * _print_rev_recursion - function aux that prints a reverse string
 * @s: va_list
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		(_print_rev_recursion(s + 1));
		if (*s != '\0')
		{
			_putchar(*s);
		}
	}
}
