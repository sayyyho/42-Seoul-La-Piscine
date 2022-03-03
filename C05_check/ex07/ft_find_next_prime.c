/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:32:42 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/20 14:41:01 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb % 2 == 0)
		return (0);
	while (check < 46341 && check <= nb / 2)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	num = 0;
	if (nb < 3)
		return (2);
	while (1)
	{
		num = ft_is_prime(nb);
		if (num == 1)
		{
			num = nb;
			break ;
		}
		nb++;
	}
	return (num);
}
