/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:11:44 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 01:21:56 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_matrix[4][4];
int		ft_is_valid_str(char *str);
int		ft_is_valid_tips(int *tips);
void	ft_create_board(void);
void	ft_place_in_matrix(int i, int j, char value);
void	ft_tips_is_1(int *tips);
void	ft_tips_is_4(int *tips);
void	ft_tips_is_2_and_4_placed(int *tips);
void	ft_tips_is_3_2(int *tips);
void	ft_tips_is_2_3(int *tips);
void	ft_tips_is_1_2(int *tips);
void	ft_3_same_number(void);
void	ft_find_last_missing_in_row(void);
void	ft_find_last_missing_in_col(void);
void	ft_print_board(void);
void	ft_functions(int *tips);

int		main(int argc, char *argv[])
{
	int i;
	int tips[16];

	if (argc == 2)
	{
		if (ft_is_valid_str(argv[1]) == 1)
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				if (i % 2 == 0)
				{
					if (argv[1][i] >= '1' && argv[1][i] <= '4')
						tips[(i / 2)] = argv[1][i] - '0';
				}
				i++;
			}
			ft_functions(tips);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}

void	ft_functions(int *tips)
{
	int i;

	if (ft_is_valid_tips(tips) == 1)
	{
		i = 0;
		ft_create_board();
		while (i < 10)
		{
			ft_tips_is_1(tips);
			ft_tips_is_4(tips);
			ft_tips_is_2_and_4_placed(tips);
			ft_tips_is_3_2(tips);
			ft_tips_is_2_3(tips);
			ft_tips_is_1_2(tips);
			ft_3_same_number();
			ft_find_last_missing_in_row();
			ft_find_last_missing_in_col();
			i++;
		}
		ft_print_board();
	}
	else
		write(1, "Error\n", 6);
}
