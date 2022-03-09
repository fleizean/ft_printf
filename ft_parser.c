/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:02:34 by eyagiz            #+#    #+#             */
/*   Updated: 2022/03/08 18:02:37 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	parser(const char *text, t_operators _operators[], va_list values)
{
	size_t	i;
	size_t	j;
	size_t	counter_values;

	i = 0;
	counter_values = 0;
	while (i < ft_strlen(text))
	{
		j = 0;
		if (text[i] == '%')
		{
			while (_operators[j].name != NULL)
			{
				if (_operators[j].name[0] == text[i + 1])
					counter_values += _operators[j].f(values);
				j++;
			}
			i++;
		}
		else
			counter_values = parser_run(text, i, counter_values);
		i++;
	}
	return (counter_values);
}

size_t	parser_run(const char *text, size_t i, size_t counter_values)
{
	ft_write(text[i]);
	counter_values++;
	return (counter_values);
}
