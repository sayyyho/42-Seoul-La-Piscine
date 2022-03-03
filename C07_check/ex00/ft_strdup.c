/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:27:26 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/22 14:30:20 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		idx;

	idx = 0;
	while (src[idx] != 0)
		idx++;
	cpy = (char *)malloc(sizeof(char) * (idx + 1));
	if (cpy == 0)
		return (0);
	idx = 0;
	while (src[idx] != 0)
	{
		cpy[idx] = src[idx];
		idx++;
	}
	cpy[idx] = 0;
	return (cpy);
}
