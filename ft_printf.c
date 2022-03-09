/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:05:12 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:05:14 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_printf(const char *str, ...)
{
	int			counter_values;
	va_list		values;
	t_operators	_operators[10];

	_operators[0] = (t_operators){"c", ft_print_c};
	_operators[1] = (t_operators){"d", ft_print_d};
	_operators[2] = (t_operators){"s", ft_print_s};
	_operators[3] = (t_operators){"i", ft_print_d};
	_operators[4] = (t_operators){"u", ft_print_ud};
	_operators[5] = (t_operators){"x", ft_print_x};
	_operators[6] = (t_operators){"X", ft_print_ux};
	_operators[7] = (t_operators){"p", ft_print_p};
	_operators[8] = (t_operators){"%", ft_print_percent};
	_operators[9] = (t_operators){NULL, NULL};
	va_start(values, str);
	counter_values = parser(str, _operators, values);
	va_end(values);
	return (counter_values);
}
