/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:43:08 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/11 23:37:08 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_place_in_matrix(int i, int j, char value);

extern char g_matrix[4][4];

void	ft_tips_is_1(int *tips)
{
	int k;

	k = -1;
	while (k++ < 16)
	{
		if (tips[k] == 1)
		{
			if (k < 4)
			{
				ft_place_in_matrix(k % 4, 0, '4');
			}
			else if (k < 8)
			{
				ft_place_in_matrix(k % 4, 3, '4');
			}
			else if (k < 12)
			{
				ft_place_in_matrix(0, k % 4, '4');
			}
			else
			{
				ft_place_in_matrix(3, k % 4, '4');
			}
		}
	}
}

void	ft_tips_is_4_p2(int k)
{
	if (k < 12)
	{
		ft_place_in_matrix(0, k % 4, '1');
		ft_place_in_matrix(1, k % 4, '2');
		ft_place_in_matrix(2, k % 4, '3');
		ft_place_in_matrix(3, k % 4, '4');
	}
	else
	{
		ft_place_in_matrix(3, k % 4, '1');
		ft_place_in_matrix(2, k % 4, '2');
		ft_place_in_matrix(1, k % 4, '3');
		ft_place_in_matrix(0, k % 4, '4');
	}
}

void	ft_tips_is_4_p1(int k)
{
	if (k < 4)
	{
		ft_place_in_matrix(k % 4, 0, '1');
		ft_place_in_matrix(k % 4, 1, '2');
		ft_place_in_matrix(k % 4, 2, '3');
		ft_place_in_matrix(k % 4, 3, '4');
	}
	else if (k < 8)
	{
		ft_place_in_matrix(k % 4, 3, '1');
		ft_place_in_matrix(k % 4, 2, '2');
		ft_place_in_matrix(k % 4, 1, '3');
		ft_place_in_matrix(k % 4, 0, '4');
	}
	else
	{
		ft_tips_is_4_p2(k);
	}
}

void	ft_tips_is_4(int *tips)
{
	int k;

	k = 0;
	while (k < 16)
	{
		if (tips[k] == 4)
		{
			ft_tips_is_4_p1(k);
		}
		k++;
	}
}

void	ft_tips_is_3_2(int *tips)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (tips[k] == 3 && tips[k + 4] == 2)
		{
			ft_place_in_matrix(k % 4, 2, '4');
		}
		if (tips[k + 8] == 3 && tips[k + 12] == 2)
		{
			ft_place_in_matrix(2, k % 4, '4');
		}
		k++;
	}
}
