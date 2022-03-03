/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:38:48 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/14 15:50:16 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		idx;

	idx = 0;
	while (*dest != '\0')
	{
		dest++;
		idx++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		idx++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest - idx);
}
