/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:45:45 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:52:02 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	solve_puzzle(t_puzzle *puzzle, int row, int col)
{
	int	num;

	if (row == SIZE)
		return (1);
	if (col == SIZE)
		return (solve_puzzle(puzzle, row + 1, 0));
	num = 1;
	while (num <= SIZE)
	{
		if (!is_in_row(puzzle, row, num) && !is_in_col(puzzle, col, num))
		{
			puzzle->g_grid[row][col] = num;
			if ((col == SIZE - 1 && !is_row_valid(puzzle, row))
				|| (row == SIZE - 1 && !is_col_valid(puzzle, col)))
			{
				puzzle->g_grid[row][col] = 0;
			}
			else if (solve_puzzle(puzzle, row, col + 1))
				return (1);
			puzzle->g_grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
