/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:43:25 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 01:03:52 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char g_matrix[4][4];

void	ft_place_in_matrix(int i, int j, char value);

void	ft_place_last_missing_in_row(int k, int l)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < 4)
	{
		if (i != k)
		{
			sum += g_matrix[i][l] - '0';
		}
		i++;
	}
	ft_place_in_matrix(k, l, (10 - sum + '0'));
}

void	ft_find_last_missing_in_row(void)
{
	int k;
	int l;
	int count_x;
	int pos[2];

	l = 0;
	count_x = 0;
	while (l < 4)
	{
		k = 0;
		while (k < 4)
		{
			if (g_matrix[k][l] == 'x')
			{
				count_x++;
				pos[0] = k;
				pos[1] = l;
			}
			k++;
		}
		if (count_x == 1)
			ft_place_last_missing_in_row(pos[0], pos[1]);
		count_x = 0;
		l++;
	}
}

void	ft_place_last_missing_in_col(int k, int l)
{
	int j;
	int sum;

	sum = 0;
	j = 0;
	while (j < 4)
	{
		if (j != l)
		{
			sum += g_matrix[k][j] - '0';
		}
		j++;
	}
	ft_place_in_matrix(k, l, (10 - sum + '0'));
}

void	ft_find_last_missing_in_col(void)
{
	int k;
	int l;
	int count_y;
	int pos[2];

	k = 0;
	count_y = 0;
	while (k < 4)
	{
		l = 0;
		while (l < 4)
		{
			if (g_matrix[k][l] == 'x')
			{
				count_y++;
				pos[0] = k;
				pos[1] = l;
			}
			l++;
		}
		if (count_y == 1)
			ft_place_last_missing_in_col(pos[0], pos[1]);
		count_y = 0;
		k++;
	}
}

void	ft_tips_is_2_and_4_placed(int *tips)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (tips[k] == 2)
		{
			if ((k < 4) && (g_matrix[k % 4][3] == '4' ||
			g_matrix[k % 4][2] == '4'))
				ft_place_in_matrix(k % 4, 0, '3');
			else if ((k < 8) && (g_matrix[k % 4][0] == '4' ||
			g_matrix[k % 4][1] == '4'))
				ft_place_in_matrix(k % 4, 3, '3');
			else if ((k < 12) && (g_matrix[3][k % 4] == '4' ||
			g_matrix[2][k % 4] == '4'))
				ft_place_in_matrix(0, k % 4, '3');
			else if ((k < 16) && (g_matrix[0][k % 4] == '4' ||
			g_matrix[1][k % 4] == '4'))
				ft_place_in_matrix(3, k % 4, '3');
		}
		k++;
	}
}
