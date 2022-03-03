/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:56:45 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/10 14:50:46 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check(char *str);

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
		str++;
		idx++;
	}
	while (*str)
	{
		check(str);
		str++;
		idx++;
	}
	return (str - idx);
}

void	check(char *str)
{
	if (*(str - 1) >= 'A' && *(str - 1) <= 'Z' && \
		*str >= 'A' && *str <= 'Z')
		*str += 32;
	else if (*(str - 1) >= '0' && *(str - 1) <= '9' && \
		*str >= 'A' && *str <= 'Z')
		*str += 32;
	else if (*(str - 1) >= 'a' && *(str - 1) <= 'z' && \
		*str >= 'A' && *str <= 'Z')
		*str += 32;
	else if (*(str - 1) >= ' ' && *(str - 1) <= '/' && \
		*str >= 'a' && *str <= 'z')
		*str -= 32;
	else if (*(str - 1) >= ':' && *(str - 1) <= '@' && \
		*str >= 'a' && *str <= 'z')
		*str -= 32;
	else if (*(str - 1) >= '[' && *(str - 1) <= '`' && \
		*str >= 'a' && *str <= 'z')
		*str -= 32;
	else if (*(str - 1) >= '{' && *(str - 1) <= '~' && \
		*str >= 'a' && *str <= 'z')
		*str -= 32;
}
