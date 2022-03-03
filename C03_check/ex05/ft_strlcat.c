/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:38:56 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/17 18:04:36 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	check_len(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	check_size;

	check_size = size;
	len_d = check_len(dest);
	len_s = check_len(src);
	if (size <= len_d)
		return (size + len_s);
	check_size -= len_d + 1;
	dest += len_d;
	while (*src != '\0' && check_size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		check_size--;
	}
	*dest = '\0';
	return (len_d + len_s);
}
