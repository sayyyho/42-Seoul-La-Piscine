/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:42:05 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/08 19:21:17 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fix_and_print(int index, char num);
char	g_numbox[10];
int		g_numlen;

void	ft_print_combn(int n)
{
	int	index;

	index = 0;
	g_numbox[0] = '0';
	g_numlen = n;
	while (g_numbox[0] <= (10 - g_numlen) + '0')
	{
		fix_and_print(index, g_numbox[0]);
		g_numbox[0]++;
	}
}

void	fix_and_print(int index, char num)
{
	if (index == g_numlen - 1)
	{
		write(1, g_numbox, g_numlen);
		if (g_numbox[0] != (10 - g_numlen) + '0')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		return ;
	}
	while (num <= (10 - g_numlen + index) + '0')
	{
		g_numbox[index + 1] = ++num;
		fix_and_print(index + 1, num);
	}	
}
