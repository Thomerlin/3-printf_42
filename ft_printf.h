/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thome <thome@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:24 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/31 06:00:40 by thome            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

typedef struct s_print
{
	va_list		list;
	const char	*str;
	char		*scan_type;
	int			size;
	int			pos;
	int			sum;
}	T_PRINT;

int		ft_printf(const char *str, ...);
void	parse_formatting(T_PRINT *box);
void	category_scanner(T_PRINT *box);
void	category_is_char(T_PRINT *box);
void	category_is_string(T_PRINT *box);
void	category_is_deci(T_PRINT *box);
void	category_is_modulo(T_PRINT *box);
void	category_is_unsign(T_PRINT *box);
void	category_is_hexa(T_PRINT *box);
void	category_is_hexa_up(T_PRINT *box);
void	category_is_hexa_ptr(T_PRINT *box);
int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsign(unsigned int n);
int		ft_hexa(unsigned long long int nb);
int		ft_hexa_up(unsigned long long int nb);

#endif