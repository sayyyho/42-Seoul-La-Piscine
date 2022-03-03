/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:51:14 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/10 14:50:38 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (*str)
	{	
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
			str++;
		}
		else
			str++;
		idx++;
	}
	return (str - idx);
}
