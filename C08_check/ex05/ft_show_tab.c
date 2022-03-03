/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:01:06 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/22 17:39:57 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstring(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

void	ft_putnbr(int num)
{
	char	char_num;

	while (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	char_num = num + '0';
	write (1, &char_num, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	while (par[idx].str != 0)
	{
		ft_putstring(par[idx].str);
		ft_putnbr(par[idx].size);
		write(1, "\n", 1);
		ft_putstring(par[idx].copy);
		idx++;
	}
}
