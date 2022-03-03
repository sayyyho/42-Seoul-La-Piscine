/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:23:27 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/23 20:26:51 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	is_correct(char *base)
{
	unsigned int	idx;
	unsigned int	check;

	idx = 0;
	while (base[idx] != '\0')
	{
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		check = idx + 1;
		while (base[check] != 0)
		{
			if (base[idx] == base[check])
				return (0);
			check++;
		}
		idx++;
	}
	if (idx <= 1)
		return (0);
	return (idx);
}

void	check_value(unsigned int nbr, unsigned int base_nb, char *base)
{
	while (nbr >= base_nb)
	{
		check_value(nbr / base_nb, base_nb, base);
		nbr %= base_nb;
	}
	write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_nb;
	unsigned int	num;

	num = 0;
	base_nb = is_correct(base);
	if (base_nb == 0)
		return ;
	if (nbr < 0)
	{
		num = nbr * -1;
		write(1, "-", 1);
	}
	else
		num = nbr;
	check_value(num, base_nb, base);
}
