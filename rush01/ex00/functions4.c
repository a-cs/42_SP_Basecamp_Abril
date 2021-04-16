/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:22:40 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 01:42:11 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char g_matrix[4][4];

void	ft_place_in_matrix(int i, int j, char value);

void	ft_tips_is_2_3_up(int k)
{
	if (g_matrix[k % 4][0] == '3' || g_matrix[k % 4][2] == '2')
	{
		ft_place_in_matrix(k % 4, 0, '3');
		ft_place_in_matrix(k % 4, 1, '4');
		ft_place_in_matrix(k % 4, 2, '2');
		ft_place_in_matrix(k % 4, 3, '1');
	}
	else if (g_matrix[k % 4][0] == '2')
	{
		ft_place_in_matrix(k % 4, 0, '2');
		ft_place_in_matrix(k % 4, 1, '4');
		ft_place_in_matrix(k % 4, 2, '3');
		ft_place_in_matrix(k % 4, 3, '1');
	}
	else if (g_matrix[k % 4][0] == '1')
	{
		ft_place_in_matrix(k % 4, 0, '1');
		ft_place_in_matrix(k % 4, 1, '4');
		ft_place_in_matrix(k % 4, 2, '3');
		ft_place_in_matrix(k % 4, 3, '2');
	}
}

void	ft_tips_is_2_3_down(int k)
{
	if (g_matrix[k % 4][3] == '3' || g_matrix[k % 4][1] == '2')
	{
		ft_place_in_matrix(k % 4, 3, '3');
		ft_place_in_matrix(k % 4, 2, '4');
		ft_place_in_matrix(k % 4, 1, '2');
		ft_place_in_matrix(k % 4, 0, '1');
	}
	else if (g_matrix[k % 4][3] == '2')
	{
		ft_place_in_matrix(k % 4, 3, '2');
		ft_place_in_matrix(k % 4, 2, '4');
		ft_place_in_matrix(k % 4, 1, '3');
		ft_place_in_matrix(k % 4, 0, '1');
	}
	else if (g_matrix[k % 4][3] == '1')
	{
		ft_place_in_matrix(k % 4, 3, '1');
		ft_place_in_matrix(k % 4, 2, '4');
		ft_place_in_matrix(k % 4, 1, '3');
		ft_place_in_matrix(k % 4, 0, '2');
	}
}

void	ft_tips_is_2_3_left(int k)
{
	if (g_matrix[0][k % 4] == '3' || g_matrix[2][k % 4] == '2')
	{
		ft_place_in_matrix(0, k % 4, '3');
		ft_place_in_matrix(1, k % 4, '4');
		ft_place_in_matrix(2, k % 4, '2');
		ft_place_in_matrix(3, k % 4, '1');
	}
	else if (g_matrix[0][k % 4] == '2')
	{
		ft_place_in_matrix(0, k % 4, '2');
		ft_place_in_matrix(1, k % 4, '4');
		ft_place_in_matrix(2, k % 4, '3');
		ft_place_in_matrix(3, k % 4, '1');
	}
	else if (g_matrix[0][k % 4] == '1')
	{
		ft_place_in_matrix(0, k % 4, '1');
		ft_place_in_matrix(1, k % 4, '4');
		ft_place_in_matrix(2, k % 4, '3');
		ft_place_in_matrix(3, k % 4, '2');
	}
}

void	ft_tips_is_2_3_right(int k)
{
	if (g_matrix[3][k % 4] == '3' || g_matrix[1][k % 4] == '2')
	{
		ft_place_in_matrix(3, k % 4, '3');
		ft_place_in_matrix(2, k % 4, '4');
		ft_place_in_matrix(1, k % 4, '2');
		ft_place_in_matrix(0, k % 4, '1');
	}
	else if (g_matrix[3][k % 4] == '2')
	{
		ft_place_in_matrix(3, k % 4, '2');
		ft_place_in_matrix(2, k % 4, '4');
		ft_place_in_matrix(1, k % 4, '3');
		ft_place_in_matrix(0, k % 4, '1');
	}
	else if (g_matrix[3][k % 4] == '1')
	{
		ft_place_in_matrix(3, k % 4, '1');
		ft_place_in_matrix(2, k % 4, '4');
		ft_place_in_matrix(1, k % 4, '3');
		ft_place_in_matrix(0, k % 4, '2');
	}
}

void	ft_tips_is_2_3(int *tips)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (tips[k] == 2 && tips[k + 4] == 3)
		{
			ft_tips_is_2_3_up(k);
		}
		if (tips[k + 4] == 2 && tips[k] == 3)
		{
			ft_tips_is_2_3_down(k);
		}
		if (tips[k + 8] == 2 && tips[k + 12] == 3)
		{
			ft_tips_is_2_3_left(k);
		}
		if (tips[k + 12] == 2 && tips[k + 8] == 3)
		{
			ft_tips_is_2_3_right(k);
		}
		k++;
	}
}
