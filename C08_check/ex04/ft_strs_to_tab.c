/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:19:37 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/22 17:39:05 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (src[len] != 0)
	{
		cpy[len] = src[len];
		len++;
	}
	cpy[len] = 0;
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			idx;
	t_stock_str	*magic_ptr;

	idx = 0;
	magic_ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (magic_ptr == 0)
		return (0);
	while (idx < ac)
	{
		magic_ptr[idx].size = ft_strlen(av[idx]);
		magic_ptr[idx].str = av[idx];
		magic_ptr[idx].copy = ft_strdup(av[idx]);
		idx ++;
	}
	magic_ptr[idx].str = 0;
	return (magic_ptr);
}
