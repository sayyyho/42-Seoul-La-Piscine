/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:53:21 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/21 17:20:17 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (size > 0)
	{
		while (strs[i][j] != 0)
		{
			len++;
			j++;
		}
		i++;
		j = 0;
		size--;
	}
	return (len);
}

void	mk_string(int size, char **strs, char *sep, char *string)
{
	int	idx;
	int	i;
	int	j;

	idx = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			string[idx] = strs[i][j];
			j++;
			idx++;
		}
		j = 0;
		while (sep[j] != 0 && size - i != 1)
		{
			string[idx] = sep[j];
			idx++;
			j++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		idx;
	int		len;

	len = 0;
	idx = 0;
	if (size <= 0)
	{
		string = (char *)malloc(sizeof(char));
		string[0] = 0;
		return (string);
	}
	len = ft_strlen(size, strs);
	while (sep[idx] != 0)
		idx++;
	len += idx * (size - 1);
	string = (char *)malloc(sizeof(char) * (len + 1));
	mk_string(size, strs, sep, string);
	string[len] = '\0';
	return (string);
}
