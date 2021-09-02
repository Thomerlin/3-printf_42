#include "ft_printf.h"

void	ft_print_unsign(t_print *box)
{
	box->len += ft_putnbr_unsign((unsigned int)va_arg(box->list, unsigned int));
}

void	ft_print_hexa(t_print *box)
{
	box->len += ft_hexa((unsigned int)va_arg(box->list, int));
}

void	ft_print_hexa_up(t_print *box)
{
	box->len += ft_hexa_up((unsigned int)va_arg(box->list, int));
}

void	ft_print_hexa_ptr(t_print *box)
{
	int	size;

	size = ft_hexa((unsigned long long int)va_arg(box->list, long long int));
	box->len += size;
}
