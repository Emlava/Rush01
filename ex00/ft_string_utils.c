/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:20:01 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:24:08 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

// print string
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// extract the number
int	ft_atoi(char **str)
{
	int	num;

	num = 0;
	while (**str >= '0' && **str <= '9')
	{
		num = num * 10 + (**str - '0');
		(*str)++;
	}
	if (**str == ' ')
		(*str)++;
	return (num);
}

// length of str
int	len_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
