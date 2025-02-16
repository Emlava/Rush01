/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:25:06 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:28:30 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

// divide the entry in 4 section g_top , g_bot , g_left and g_right
int	parse_input(t_puzzle *puzzle, char *str)
{
	int	i;

	i = 0;
	while (i < SIZE)
		puzzle->g_top[i++] = ft_atoi(&str);
	i = 0;
	while (i < SIZE)
		puzzle->g_bottom[i++] = ft_atoi(&str);
	i = 0;
	while (i < SIZE)
		puzzle->g_left[i++] = ft_atoi(&str);
	i = 0;
	while (i < SIZE)
		puzzle->g_right[i++] = ft_atoi(&str);
	return (*str == '\0');
}
