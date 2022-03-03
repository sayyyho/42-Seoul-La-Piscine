/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:02:33 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/23 17:00:57 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{	
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

int	is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	flag;
	int	idx;

	flag = 1;
	idx = 0;
	while (str[idx])
	{
		flag = is_printable(str[idx]);
		if (flag == 0)
		{
			print_hex(str[idx]);
			idx++;
			continue ;
		}
		write(1, &str[idx], 1);
		idx++;
	}
}
