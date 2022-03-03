/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:21:15 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/14 19:22:45 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (nb > 0)
	{	
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
		}
		else
			break ;
		nb--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
