#include "main.h"

/**
 * print_string - print each character in a string
 * @str: string
 * Return: void
 */

int print_string(char *str)
{
	int i, str_len = 0;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
		str_len++;
	}
	return (str_len);
}

