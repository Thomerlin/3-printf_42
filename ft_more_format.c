/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_more_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri < tyago-ri@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:01:04 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/09/06 13:01:05 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsign(t_print *box)
{
	box->prt += ft_putnbr_unsign((unsigned int)va_arg(box->list, unsigned int));
}

void	ft_print_hexa(t_print *box)
{
	box->prt += ft_hexa((unsigned int)va_arg(box->list, int));
}

void	ft_print_hexa_up(t_print *box)
{
	box->prt += ft_hexa_up((unsigned int)va_arg(box->list, int));
}

void	ft_print_hexa_ptr(t_print *box)
{
	int	len;

	box->prt += (write (1, "0x", 2));
	len = ft_hexa((unsigned long long int)va_arg(box->list, long long int));
	box->prt += len;
}
