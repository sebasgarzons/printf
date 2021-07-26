#include "holberton.h"
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
