#include <stdarg.h>

int	placeholder(va_list inputs, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(inputs, char)));
	else if (type == 's')
		return (ft_putstr(va_arg(inputs, char)));
	else if (type == 'p')
		return (ft_putc(va_arg(inputs, char)));
	else if (type == 'd')
		return (ft_putnbr(va_arg(inputs, int)));
	else if (type == 'i')
		return (ft_putnbr(va_arg(inputs, int)));
	else if (type == 'u')
		return (ft_put_un(va_arg(inputs, int)));
	else if (type == 'x')
		return (ft_puthex(va_arg(inputs, unsigned long long)));
	else if (type == 'X')
		return (ft_puthex(va_arg(inputs, unsigned long long)));
	else if (type == '%')
		return (ft_putchar('%'));
	else
		return (r);
}

int	ft_printf(const char *s, ...)
{
	int	count;
	va_list inputs;

	va_start(inputs, s);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
			count += placeholder(inputs, s[1]);
		else if (*s == '\\' && *(s + 1))
			count += plain_char(inputs, s[1]);
		s++;
	}
	va_end(inputs);
	return (count);
}