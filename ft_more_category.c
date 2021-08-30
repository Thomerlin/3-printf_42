/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_more_category.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri@student.42sp.org.br <tyago-ri>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:32 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/30 09:27:33 by tyago-ri@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	category_is_unsign(t_print *box)
{
	box->sum += ft_putnbr_unsign((unsigned int)va_arg(box->list, unsigned int));
}

void	category_is_hexa(t_print *box)
{
	box->sum += ft_hexa((unsigned int)va_arg(box->list, int));
}

void	category_is_hexa_up(t_print *box)
{
	box->sum += ft_hexa_up((unsigned int)va_arg(box->list, int));
}

void	category_is_hexa_ptr(t_print *box)
{
	int	len;

	len = ft_hexa((unsigned long long int)va_arg(box->list, long long int));
	box->sum += len;
}
