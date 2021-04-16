/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:02:15 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/03 20:30:19 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int x, int y);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print(x, y);
			y++;
		}
		x++;
	}
}

void	ft_print(int x, int y)
{
	char c1;
	char c2;
	char c3;
	char c4;

	c1 = '0' + x / 10;
	c2 = '0' + x % 10;
	c3 = '0' + y / 10;
	c4 = '0' + y % 10;
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
	if (c1 != '9' || c2 != '8' || c3 != '9' || c4 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
