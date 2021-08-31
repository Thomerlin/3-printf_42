/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_category.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thome <thome@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:30 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/31 13:20:08 by thome            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	category_is_char(T_PRINT *box)
{
	box->sum += ft_putchar((char)va_arg(box->list, int));
}

void	category_is_string(T_PRINT *box)
{
	const char	*str;
	int			index;

	index = 0;
	str = va_arg(box->list, char *);

	if (str == NULL)
	{
		box->sum += write(1, "(null)", 6);
		return ;
	}
	while (str[index] != '\0')
	{
		box->sum += write(1, &str[index], 1);
		index++;
	}
}

void	category_is_deci(T_PRINT *box)
{
	box->sum += ft_putnbr(va_arg(box->list, unsigned int));
}

void	category_is_modulo(T_PRINT *box)
{
	box->sum += (write(1, "%", 1));
}
