/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayyyho <sayyyho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:09:28 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/22 09:56:15 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	exec;
	int	idx;

	idx = 0;
	exec = 0;
	while (exec < size)
	{
		while (idx < size - 1)
		{
			if (*(tab + idx) > *(tab + idx + 1))
			{
				tmp = *(tab + idx);
				*(tab + idx) = *(tab + idx + 1);
				*(tab + idx + 1) = tmp;
			}
			idx++;
		}
		exec++;
		idx = 0;
	}
}
