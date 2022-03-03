/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:15:23 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/23 11:52:28 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	idx;

	len = 0;
	idx = 0;
	while (idx + 1 < size && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
		len++;
	}
	if (size != 0)
		dest[idx] = '\0';
	while (src[idx] != 0)
	{
		len++;
		idx++;
	}
	return (len);
}
