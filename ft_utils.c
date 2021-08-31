/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thome <thome@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:35 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/31 06:00:27 by thome            ###   ########.fr       */
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
