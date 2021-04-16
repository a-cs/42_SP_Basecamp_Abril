/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:42:56 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/11 23:47:23 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char g_matrix[4][4];

int		ft_is_valid_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
			{
				return (0);
			}
		}
		else if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		return (0);
	}
	return (1);
}

int		ft_is_valid_tips(int *tips)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (!((tips[i] + tips[i + 4] >= 3) && (tips[i] + tips[i + 4] <= 5)))
		{
			return (0);
		}
		if (!((tips[i + 8] + tips[i + 12] >= 3) &&
		(tips[i + 8] + tips[i + 12] <= 5)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_create_board(void)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			g_matrix[i][j] = 'x';
			i++;
		}
		j++;
	}
}

void	ft_place_in_matrix(int i, int j, char value)
{
	int x;
	int is_placed;

	is_placed = 0;
	if (g_matrix[i][j] == 'x')
	{
		x = 0;
		while (x < 4)
		{
			if ((g_matrix[x][j] == value) || (g_matrix[i][x] == value))
			{
				is_placed = 1;
				break ;
			}
			x++;
		}
	}
	else
		is_placed = 1;
	if (is_placed == 0)
		g_matrix[i][j] = value;
}

void	ft_print_board(void)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			write(1, &g_matrix[i][j], 1);
			if (i != 3)
			{
				write(1, " ", 1);
			}
			else
			{
				write(1, "\n", 1);
			}
			i++;
		}
		j++;
	}
}
