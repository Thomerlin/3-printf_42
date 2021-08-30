/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri@student.42sp.org.br <tyago-ri>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:24 by tyago-ri@st       #+#    #+#             */
/*   Updated: 2021/08/30 09:27:25 by tyago-ri@st      ###   ########.fr       */
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
}	t_print;

int		ft_printf(const char *str, ...);
void	parse_formatting(t_print *box);
void	category_scanner(t_print *box);
void	category_is_char(t_print *box);
void	category_is_string(t_print *box);
void	category_is_deci(t_print *box);
void	category_is_modulo(t_print *box);
void	category_is_unsign(t_print *box);
void	category_is_hexa(t_print *box);
void	category_is_hexa_up(t_print *box);
void	category_is_hexa_ptr(t_print *box);
int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsign(unsigned int n);
int		ft_hexa(unsigned long long int nb);
int		ft_hexa_up(unsigned long long int nb);
#endif