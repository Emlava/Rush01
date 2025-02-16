/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:35:11 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:45:15 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

// checks that the num value does not appear more than once in row
int	is_in_row(t_puzzle *puzzle, int row, int num)
{
	int	col;

	col = 0;
	while (col < SIZE)
	{
		if (puzzle->g_grid[row][col] == num)
			return (1);
		col++;
	}
	return (0);
}

// checks that the num value does not appear more than once in col
int	is_in_col(t_puzzle *puzzle, int col, int num)
{
	int	row;

	row = 0;
	while (row < SIZE)
	{
		if (puzzle->g_grid[row][col] == num)
			return (1);
		row++;
	}
	return (0);
}

// count from left to right the number of visible boxes
int	count_visible(int *line)
{
	int	count;
	int	max_height;
	int	i;

	max_height = line[0];
	count = 1;
	i = 1;
	while (i < SIZE)
	{
		if (line[i] > max_height)
		{
			count++;
			max_height = line[i];
		}
		i++;
	}
	return (count);
}

// check if the line is good right -> left and left -> right
int	is_row_valid(t_puzzle *puzzle, int row)
{
	int	line[SIZE];
	int	i;
	int	temp;

	i = 0;
	while (i < SIZE)
	{
		line[i] = puzzle->g_grid[row][i];
		i++;
	}
	if (count_visible(line) != puzzle->g_left[row])
		return (0);
	i = 0;
	while (i < SIZE / 2)
	{
		temp = line[i];
		line[i] = line[SIZE - 1 - i];
		line[SIZE - 1 - i] = temp;
		i++;
	}
	if (count_visible(line) != puzzle->g_right[row])
		return (0);
	return (1);
}

// check if the column is good top -> bot and bot -> top
int	is_col_valid(t_puzzle *puzzle, int col)
{
	int	line[SIZE];
	int	i;
	int	temp;

	i = 0;
	while (i < SIZE)
	{
		line[i] = puzzle->g_grid[i][col];
		i++;
	}
	if (count_visible(line) != puzzle->g_top[col])
		return (0);
	i = 0;
	while (i < SIZE / 2)
	{
		temp = line[i];
		line[i] = line[SIZE - 1 - i];
		line[SIZE - 1 - i] = temp;
		i++;
	}
	if (count_visible(line) != puzzle->g_bottom[col])
		return (0);
	return (1);
}
