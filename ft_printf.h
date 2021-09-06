/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri < tyago-ri@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:01:08 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/09/06 13:01:08 by tyago-ri         ###   ########.fr       */
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
	int			index;
	int			pos;
	int			prt;
}	t_print;

int		ft_printf(const char *str, ...);
void	verify_formatting(t_print *box);
void	format_scanner(t_print *box);
void	ft_print_char(t_print *box);
void	ft_print_string(t_print *box);
void	ft_print_deci(t_print *box);
void	ft_print_modulo(t_print *box);
void	ft_print_unsign(t_print *box);
void	ft_print_hexa(t_print *box);
void	ft_print_hexa_up(t_print *box);
void	ft_print_hexa_ptr(t_print *box);
int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsign(unsigned int n);
int		ft_hexa(unsigned long long int nb);
int		ft_hexa_up(unsigned long long int nb);
#endif
