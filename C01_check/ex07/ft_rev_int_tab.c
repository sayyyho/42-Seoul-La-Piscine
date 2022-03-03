/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:40:01 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/22 10:08:35 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	idx;

	idx = 0;
	while (idx < size / 2)
	{
		temp = tab[idx];
		tab[idx] = tab[size - idx - 1];
		tab[size - idx - 1] = temp;
		idx++;
	}	
}
