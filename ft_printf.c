/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri < tyago-ri@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:00:39 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/09/06 13:00:40 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_scanner(t_print *box)
{
	box->scan_type = "cspdiuxX%";
	while (box->scan_type[box->index] != box->str[box->pos])
		box->index++;
}

void	verify_formatting(t_print *box)
{
	void	(*format_is[9])(t_print *);

	format_is[0] = &ft_print_char;
	format_is[1] = &ft_print_string;
	format_is[2] = &ft_print_hexa_ptr;
	format_is[3] = &ft_print_deci;
	format_is[4] = &ft_print_deci;
	format_is[5] = &ft_print_unsign;
	format_is[6] = &ft_print_hexa;
	format_is[7] = &ft_print_hexa_up;
	format_is[8] = &ft_print_modulo;
	box->index = 0;
	while (box->str[box->pos])
	{
		if (box->str[box->pos] == '%')
		{
			box->pos++;
			format_scanner(box);
			format_is[box->index](box);
			box->index = 0;
		}
		else
			box->prt += ft_putchar(box->str[box->pos]);
		box->pos++;
	}
}

int	ft_printf(const char *str, ...)
{
	t_print	box;

	va_start(box.list, str);
	box.str = str;
	box.pos = 0;
	box.prt = 0;
	verify_formatting(&box);
	va_end(box.list);
	return (box.prt);
}
