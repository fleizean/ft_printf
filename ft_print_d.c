/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:03:08 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:03:45 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_d(va_list va)
{
	int		len;
	int		d;
	int		i;
	char	*str;

	d = va_arg(va, int);
	len = ft_count_digits(d, 10);
	i = 0;
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	str = ft_itoa(d);
	while (str[i])
		write(1, &str[i++], 1);
	free(str);
	return (len);
}
