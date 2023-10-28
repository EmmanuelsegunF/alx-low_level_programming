#include "main.h"

/**
 * _puts_recursion - prints a new string followed a new line
 * @s: pointyer to the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
