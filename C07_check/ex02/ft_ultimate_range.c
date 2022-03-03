/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:40:17 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/24 14:42:14 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ptr;
	int	idx;

	idx = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == 0)
		return (-1);
	while (max > min)
	{
		ptr[idx] = min;
		idx++;
		min++;
	}
	*range = ptr;
	return (size);
}
