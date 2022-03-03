/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:15:37 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/06 17:47:19 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_row(int col)
{
	int	col_count;

	col_count = 1;
	while (col_count <= col)
	{
		if (col_count == 1)
		{
			ft_putchar('o');
		}
		else if (col_count < col)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		col_count++;
	}
}

void	middle_row(int col)
{
	int	col_count;

	col_count = 1;
	while (col_count <= col)
	{
		if (col_count == 1 || col_count == col)
		{
			ft_putchar('|');
		}
		else if (col_count < col)
		{
			ft_putchar(' ');
		}
		col_count++;
	}
}

void	last_row(int col)
{
	int	col_count;

	col_count = 1;
	while (col_count <= col)
	{
		if (col_count == 1)
		{
			ft_putchar('o');
		}
		else if (col_count < col)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		col_count++;
	}
}

void	branch_row(int row_count, int row, int col)
{
	while (row_count <= row)
	{
		if (row_count == 1)
		{
			first_row(col);
		}
		else if (row_count != row)
		{
			middle_row(col);
		}
		else
		{
			last_row(col);
		}
		ft_putchar('\n');
		row_count++;
	}
}

void	rush(int col, int row)
{
	int	row_count;

	row_count = 1;
	if (row > 0 && col > 0)
	{
		branch_row(row_count, row, col);
	}
}
