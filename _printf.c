#include "main.h"

/**
 * _printf - A function that produces output according to format
 * @format: The format identifier
 * @...: Variadic function
 * Return: Integer
 */

int _printf(const char *format, ...)
{
	int n = 0, i;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				i++;
				n -= 1;
			}
			if (format[i + 1] == 's')
			{
				n = (n - 2) + print_string(va_arg(ap, char *));
				i++;
			}
			if (format[i + 1] == 's')
			{
				_putchar(format[i + 1]);
				i++;
				n -= 1;
			}
		}
		else
			_putchar(format[i]);
		i++;
		n++;
	}
	va_end(ap);
	return (n);

}