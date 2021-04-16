/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:43:27 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/11 23:03:08 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_place_in_matrix(int i, int j, char value);

extern char g_matrix[4][4];

void	ft_tips_is_1_2(int *tips)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (tips[k] == 1 && tips[k + 4] == 2)
		{
			ft_place_in_matrix(k % 4, 0, '4');
			ft_place_in_matrix(k % 4, 3, '3');
		}
		if (tips[k + 8] == 1 && tips[k + 12] == 2)
		{
			ft_place_in_matrix(0, k % 4, '4');
			ft_place_in_matrix(3, k % 4, '3');
		}
		k++;
	}
}

void	ft_find_4th(char value)
{
	int k;
	int l;
	int count_k;
	int count_l;

	l = 0;
	count_k = 0;
	count_l = 0;
	while (l < 4)
	{
		k = 0;
		while (k < 4)
		{
			if (g_matrix[k][l] == value)
			{
				count_k += k;
				count_l += l;
			}
			k++;
		}
		l++;
	}
	ft_place_in_matrix((6 - count_k), (6 - count_l), value);
}

void	ft_3_same_number(void)
{
	int		k;
	int		l;
	int		count;
	char	value;

	value = '0';
	while (value++ <= '4')
	{
		count = 0;
		l = 0;
		while (l < 4)
		{
			k = -1;
			while (k++ < 4)
			{
				if (g_matrix[k][l] == value)
				{
					count++;
				}
			}
			l++;
		}
		if (count == 3)
			ft_find_4th(value);
	}
}
