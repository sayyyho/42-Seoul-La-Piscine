/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:04:14 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/21 19:02:20 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *av)
{
	while (*av != 0)
	{
		write(1, av, 1);
		av++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *str, char *str2)
{	
	while (*str || *str2)
	{
		if (*str != *str2)
			return (*str - *str2);
		str++;
		str2++;
	}
	return (0);
}

void	setting(int ac, char *av[])
{
	int		check;
	int		idx;
	int		flag;
	char	*temp;

	check = 1;
	while (check < ac)
	{
		idx = 1;
		while (idx < ac - 1)
		{
			flag = ft_strcmp(av[idx], av[idx + 1]);
			if (flag > 0)
			{
				temp = av[idx];
				av[idx] = av[idx + 1];
				av[idx + 1] = temp;
			}
			idx++;
		}
		check++;
	}
}

int	main(int ac, char *av[])
{
	int	idx;

	idx = 1;
	setting(ac, av);
	while (av[idx])
	{
		print(av[idx]);
		idx++;
	}
	return (0);
}
