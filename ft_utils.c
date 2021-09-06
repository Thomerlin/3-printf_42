/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri < tyago-ri@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:01:11 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/09/06 13:01:11 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	return (write (1, str, ft_strlen(str)));
}
