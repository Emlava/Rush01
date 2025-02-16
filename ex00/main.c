/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:48:54 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 16:01:05 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	main(int argc, char **argv)
{
	t_puzzle	puzzle;

	if (argc != 2 || !parse_input(&puzzle, argv[1]))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argv[1][len_input(argv[1]) - 1] < '0'
		|| argv[1][len_input(argv[1] - 1)] > '9')
	{
		ft_putstr("Error\n");
		return (1);
	}
	init_grid(&puzzle);
	if (solve_puzzle(&puzzle, 0, 0))
		print_grid(&puzzle);
	else
		ft_putstr("Error\n");
	return (0);
}
