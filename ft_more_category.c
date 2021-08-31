/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_more_category.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thome <thome@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:32 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/30 09:59:06 by thome            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	category_is_unsign(T_PRINT *box)
{
	box->sum += ft_putnbr_unsign((unsigned int)va_arg(box->list, unsigned int));
}

void	category_is_hexa(T_PRINT *box)
{
	box->sum += ft_hexa((unsigned int)va_arg(box->list, int));
}

void	category_is_hexa_up(T_PRINT *box)
{
	box->sum += ft_hexa_up((unsigned int)va_arg(box->list, int));
}

void	category_is_hexa_ptr(T_PRINT *box)
{
	int	len;

	len = ft_hexa((unsigned long long int)va_arg(box->list, long long int));
	box->sum += len;
}
