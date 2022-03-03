/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:50:40 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/07 19:52:18 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	isnegative(int nb);
void	cal(int nb);
void	putnum(char c);

void	ft_putnbr(int nb)
{
	isnegative(nb);
}

void	isnegative(int nb)
{	
	if (nb == -2147483648)
	{
		putnum('-');
		putnum('2');
		cal(147483648);
	}
	else if (nb < 0)
	{
		nb = -1 * nb;
		putnum('-');
		cal(nb);
	}
	else
	{
		cal(nb);
	}
}

void	cal(int nb)
{
	if (nb > 9)
	{
		cal(nb / 10);
		nb %= 10;
	}
	putnum(nb + '0');
}

void	putnum(char c)
{
	write(1, &c, 1);
}
