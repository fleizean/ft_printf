/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:02:17 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:02:20 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	put_itoa(char *string, int len, size_t n)
{
	if (n < 10)
		string[len] = n + '0';
	else
	{
		put_itoa(string, len - 1, n / 10);
		string[len] = (n % 10) + '0';
	}
}

char	*ft_itoa(int n)
{
	char		*string;
	size_t		len;
	size_t		num;
	size_t		is_minus;
	long int	n1;

	n1 = n;
	is_minus = 0;
	if (n1 < 0)
	{
		num = -1 * (size_t)n1;
		is_minus = 1;
	}
	else
		num = n1;
	len = ft_count_digits(num, 10);
	string = (char *)malloc(sizeof(char) * (len + is_minus + 1));
	if (!string)
		return (NULL);
	if (is_minus)
		string[0] = '-';
	put_itoa(string + is_minus, len - 1, num);
	string[len + is_minus] = '\0';
	return (string);
}
