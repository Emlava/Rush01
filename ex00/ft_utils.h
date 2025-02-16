/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchrispe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:33:13 by mchrispe          #+#    #+#             */
/*   Updated: 2025/02/16 14:56:08 by mchrispe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# define SIZE 4
# include <unistd.h>

typedef struct s_puzzle
{
	int	g_top[SIZE];
	int	g_bottom[SIZE];
	int	g_left[SIZE];
	int	g_right[SIZE];
	int	g_grid[SIZE][SIZE];
}		t_puzzle;

void	ft_putstr(char *str);

void	print_grid(t_puzzle *puzzle);

void	init_grid(t_puzzle *puzzle);

int		ft_atoi(char **str);

int		parse_input(t_puzzle *puzzle, char *str);

int		is_in_col(t_puzzle *puzzle, int col, int num);

int		is_in_row(t_puzzle *puzzle, int row, int num);

int		count_visible(int *line);

int		is_row_valid(t_puzzle *puzzle, int row);

int		is_col_valid(t_puzzle *puzzle, int col);

int		solve_puzzle(t_puzzle *puzzle, int row, int col);

int		len_input(char *str);
#endif
