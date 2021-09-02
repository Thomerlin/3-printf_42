#include "ft_printf.h"

void	ft_print_char(t_print *box)
{
	box->len += ft_putchar((char)va_arg(box->list, int));
}

void	ft_print_string(t_print *box)
{
	const char	*str;
	int			index;

	index = 0;
	str = va_arg(box->list, char *);
	if (str == NULL)
	{
		box->len += write(1, "(null)", 6);
		return ;
	}
	while (str[index] != '\0')
	{
		box->len += write(1, &str[index], 1);
		index++;
	}
}

void	ft_print_deci(t_print *box)
{
	box->len += ft_putnbr(va_arg(box->list, unsigned int));
}

void	ft_print_modulo(t_print *box)
{
	box->len += (write(1, "%", 1));
}
