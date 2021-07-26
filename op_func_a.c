#include "holberton.h"
#include <stdio.h>

/**
 * _printf_s - function that prints a string
 * @s: va_list
 * Return: string's length
 */

int _printf_bin(va_list s)
{
	char *str = va_arg(s, char *);

	int size = write(1, str, _strlen(str));

	return (size);
}

/**
 * _printf_d - function that prints an integer
 * @d: va_list
 * Return: 1
 */
int _printf_o(va_list o)
{
	unsigned int length;
	char buffer[1024];

	_itoa(va_arg(o, unsigned int), buffer, 8);
	length = write(1, buffer, _strlen(buffer));

	printf("\n%s\n", buffer);
	return (length);
}
