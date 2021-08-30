/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_category.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri@student.42sp.org.br <tyago-ri>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:30 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/30 09:27:30 by tyago-ri@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	category_is_char(t_print *box)
{
	box->sum += ft_putchar((char)va_arg(box->list, int));
}

void	category_is_string(t_print *box)
{
	box->sum += ft_putstr((char *)va_arg(box->list, char *));
}

void	category_is_deci(t_print *box)
{
	box->sum += ft_putnbr(va_arg(box->list, unsigned int));
}

void	category_is_modulo(t_print *box)
{
	box->sum += (write(1, "%", 1));
}
