/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:57:26 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/15 19:10:46 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check_strstr(char *str, char *to_find)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		while (*str == *to_find)
		{
			if (*(to_find + 1) == '\0')
				return (str - i);
			else if (*(to_find + 1) != *(str + 1))
			{
				to_find -= i;
				str -= i;
				break ;
			}
			to_find++;
			str++;
			i++;
		}
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0' && *to_find != '\0')
		return (0);
	else if (*str == '\0' && *to_find == '\0')
		return ("");
	else if (*str != '\0' && *to_find == '\0')
		return (str);
	else
		return (check_strstr(str, to_find));
}
