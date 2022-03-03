/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:50:14 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/17 13:52:47 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_correct(char *base)
{
	int	len;
	int	idx;

	len = 0;
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-' || *base == ' ' || *base == '\n' || \
		*base == '\t' || *base == '\v' || *base == '\f' || *base == '\r')
			return (0);
		idx = 1;
		while (*(base + idx) != 0)
		{
			if (*base == *(base + idx))
				return (0);
			idx++;
		}
		base++;
		len++;
	}
	return (len);
}

int	cal_atoi(char *str, char *base, int len)
{
	int	idx;
	int	val;

	val = 0;
	while (*str != '\0')
	{
		idx = 0;
		while (base[idx] != '\0')
		{
			if (base[idx] == *str)
			{
				val *= len;
				val += idx;
				idx = 0;
				break ;
			}
			idx++;
		}
		if (idx != 0)
			return (val);
		str++;
	}
	return (val);
}

int	ft_atoi(char *str, char *base, int len)
{
	int	sign;

	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || \
	*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (sign * cal_atoi(str, base, len));
}

int	ft_atoi_base(char *str, char *base)
{
	int	check;

	check = 0;
	check = is_correct(base);
	if (check == 0)
		return (0);
	return (ft_atoi(str, base, check));
}
