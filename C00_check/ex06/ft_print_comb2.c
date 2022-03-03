/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:40:03 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/08 17:35:40 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cal(char lspace[2], char rspace[2]);
void	print(char lspace[2], char rspace[2]);

void	ft_print_comb2(void)
{
	char	lspace[2];
	char	rspace[2];

	lspace[0] = '0';
	lspace[1] = '0';
	rspace[0] = '0';
	rspace[1] = '1';
	cal(lspace, rspace);
}

void	cal(char lspace[2], char rspace[2])
{
	while (lspace[0] <= '9')
	{
		while (lspace[1] <= '9')
		{
			while (rspace[0] <= '9')
			{
				while (rspace[1] <= '9')
				{
					print(lspace, rspace);
					rspace[1]++;
				}
				rspace[0]++;
				rspace[1] = '0';
			}
			++lspace[1];
			rspace[1] = lspace[1];
			++rspace[1];
			rspace[0] = lspace[0];
		}
		lspace[0]++;
		lspace[1] = '0';
		rspace[0] = lspace[0];
		rspace[1] = lspace[1];
		++rspace[1];
	}
}

void	print(char lspace[2], char rspace[2])
{
	write(1, &lspace[0], 2);
	write(1, " ", 1);
	write(1, &rspace[0], 2);
	if (!(lspace[0] == '9' && lspace[1] == '8'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
