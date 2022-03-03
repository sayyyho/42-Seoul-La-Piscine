/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:13:21 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/14 21:34:56 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	touch_nb(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		return (147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		return (nb);
	}
	else
		return (nb);
}

void	ft_putnbr(int nb)
{
	char	*dec;

	dec = "0123456789";
	nb = touch_nb(nb);
	while (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	write(1, &dec[nb], 1);
}
