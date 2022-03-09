/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:01:53 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:01:59 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count_digits(int value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}

int	ft_count_digits_ud(unsigned int value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result ++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}

int	ft_count_digits_llud(unsigned long long value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result ++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}
