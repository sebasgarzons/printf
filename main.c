#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "HELLO";

	int a = _printf("%R\n", str);
	_printf("%d", a);
	return(0);
}
