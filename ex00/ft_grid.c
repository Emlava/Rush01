/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:27:22 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:42:55 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

// write the g_grid
void	print_grid(t_puzzle *puzzle)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = puzzle->g_grid[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// create a grid with only 0
void	init_grid(t_puzzle *puzzle)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			puzzle->g_grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
