#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(char *format, ...)
{
	int *i;

	i = 0;
	va_list args;
	va_start(args, format);
	while(*format)
	{
		if (*format == '%' && *[format + 1])
		{
			ft_type(format, args, i)
		}
		write(1, format, 1);
		format++;
		i++;
	}


	va_end(args);
	return(i);
}
