/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:06:12 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:06:13 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_convert
{
	char	*name;
	int		(*f)(va_list);
}	t_operators;

int		ft_printf(const char *str, ...);
int		parser(const char *text, t_operators _operators[], va_list values);
size_t	parser_run(const char *text, size_t i, size_t counter_values);
int		ft_print_c(va_list va);
int		ft_print_d(va_list va);
int		ft_print_s(va_list va);
int		ft_print_ud(va_list list);
int		ft_print_x(va_list va);
int		ft_print_ux(va_list va);
int		ft_print_hex(va_list va, char *hexa);
void	ft_hex(unsigned int num, char *hexa);
int		ft_print_percent(va_list va);
int		ft_print_p(va_list va);
int		ft_print_ptr(va_list va, char *hexa);
void	ft_ptr(unsigned long long num, char *hexa);
int		ft_write(int c);
int		ft_count_digits(int value, int base);
int		ft_count_digits_ud(unsigned int value, int base);
int		ft_count_digits_llud(unsigned long long value, int base);
size_t	ft_strlen(const char *s);

//itoa
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

#endif
