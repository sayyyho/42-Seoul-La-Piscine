/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:46:57 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/23 21:51:46 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char check, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx] != 0)
	{
		if (charset[idx] == check)
			return (1);
		idx++;
	}
	return (0);
}

char	*make_arr(char *str, int end, int start)
{
	int		idx;
	int		len;
	char	*arr;

	idx = 0;
	len = end - start;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == 0)
		return (0);
	while (idx < len)
	{
		arr[idx] = str[start];
		start++;
		idx++;
	}
	arr[idx] = '\0';
	return (arr);
}

int	check_size(char *str, char *charset)
{
	int	idx;
	int	size;

	size = 0;
	idx = 0;
	while (str[idx])
	{
		while (is_sep(str[idx], charset) == 1 && str[idx])
			idx++;
		if (str[idx])
			size++;
		while (is_sep(str[idx], charset) == 0 && str[idx])
			idx++;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	int		loce;
	int		locs;
	int		idx;
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (check_size(str, charset) + 1));
	if (arr == 0)
		return (0);
	idx = 0;
	loce = 0;
	while (str[idx])
	{
		while (is_sep(str[loce], charset) == 1 && str[loce] != 0)
			loce++;
		if (!str[loce])
			break ;
		locs = loce;
		while (is_sep(str[loce], charset) == 0 && str[loce] != 0)
			loce++;
		arr[idx] = make_arr(str, loce, locs);
		idx++;
	}
	arr[idx] = 0;
	return (arr);
}
