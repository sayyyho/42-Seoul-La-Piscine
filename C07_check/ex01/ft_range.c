/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:26:25 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/24 14:41:41 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;
	int	idx;

	idx = 0;
	len = 0;
	if (min >= max)
		return (0);
	len = max - min;
	ptr = (int *)malloc(sizeof(int) * len);
	if (ptr == 0)
		return (0);
	while (len > 0)
	{
		ptr[idx] = min + idx;
		len--;
		idx++;
	}
	return (ptr);
}
