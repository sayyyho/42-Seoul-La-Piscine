/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehopark <sehopark@student.42seoul.kr>       +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:47:20 by sehopark          #+#    #+#             */
/*   Updated: 2022/02/08 17:46:26 by sehopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(int loc[3], char func[3]);
void	print(char result[3], char fun[3], int loc[3]);

void	ft_print_comb(void)
{
	char	func[3];	
	int		loc [3];

	func[0] = '0';
	func[1] = ',';
	func[2] = ' ';
	loc[0] = 0;
	loc[1] = 1;
	loc[2] = 2;
	check(loc, func);
}

void	check(int loc[3], char func[3])
{
	char	result[3];

	while (loc[0] <= 7)
	{
		while (loc[1] <= 8)
		{
			while (loc[2] <= 9)
			{
				result[0] = loc[0] + func[0];
				result[1] = loc[1] + func[0];
				result[2] = loc[2] + func[0];
				print(result, func, loc);
				loc[2]++;
			}
			loc[1]++;
			loc[2] = loc[1] + 1;
		}
		loc[0]++;
		loc[1] = loc[0] + 1;
		loc[2] = loc[1] + 1;
	}
}	

void	print(char result[3], char func[3], int loc[3])
{
	write(1, &result[0], 1);
	write(1, &result[1], 1);
	write(1, &result[2], 1);
	if (loc[0] == 7 && loc[1] == 8 && loc[2] == 9)
	{
		return ;
	}
	else
	{
		write(1, &func[1], 1);
		write(1, &func[2], 1);
	}
}
