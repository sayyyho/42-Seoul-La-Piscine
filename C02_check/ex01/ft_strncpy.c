/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayyyho <sayyyho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:58:35 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/10 10:10:53 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if (*src == '\0')
			*dest = '\0';
		else
		{
			*dest = *src;
			src++;
		}
		cnt++;
		dest++;
	}
	return (dest - cnt);
}
