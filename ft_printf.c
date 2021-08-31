/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thome <thome@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:16 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/30 09:58:49 by thome            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	category_scanner(T_PRINT *box)
{
	box->scan_type = "cspdiuxX%";
	while (box->scan_type[box->size] != box->str[box->pos])
		box->size++;
	if (box->scan_type[box->size] == 'p')
		box->sum += (write (1, "0x", 2));
}

void	parse_formatting(T_PRINT *box)
{
	void	(*category_is[9])(T_PRINT *);

	category_is[0] = &category_is_char;
	category_is[1] = &category_is_string;
	category_is[2] = &category_is_hexa_ptr;
	category_is[3] = &category_is_deci;
	category_is[4] = &category_is_deci;
	category_is[5] = &category_is_unsign;
	category_is[6] = &category_is_hexa;
	category_is[7] = &category_is_hexa_up;
	category_is[8] = &category_is_modulo;
	box->size = 0;
	while (box->str[box->pos])
	{
		if (box->str[box->pos] == '%')
		{
			box->pos++;
			category_scanner(box);
			category_is[box->size](box);
			box->size = 0;
		}
		else
			box->sum += ft_putchar(box->str[box->pos]);
		box->pos++;
	}
}

int	ft_printf(const char *str, ...)
{
	T_PRINT	box;

	va_start(box.list, str);
	box.str = str;
	box.pos = 0;
	box.sum = 0;
	parse_formatting(&box);
	va_end(box.list);
	return (box.sum);
}
