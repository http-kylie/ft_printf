#include <stdarg.h>

void

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