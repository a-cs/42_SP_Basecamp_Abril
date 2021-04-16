/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1011/04/03 01:56:11 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/06 22:13:09 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_positive(int nb);
void	ft_print_negative(int nb);

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		ft_print_positive(nb);
	}
	else
	{
		ft_print_negative(nb);
	}
}

void	ft_putchar(char c)
{
	if (c != 'x')
	{
		write(1, &c, 1);
	}
}

void	ft_print_positive(int nb)
{
	int		c;
	char	digits[10];

	c = 0;
	while (c <= 9)
	{
		if ((nb / 10) != 0 || (nb % 10) != 0 || c == 0)
		{
			digits[c] = '0' + nb % 10;
			nb /= 10; 
		}
		else
		{
			digits[c] = 'x';
		}
		c++;
	}
	c = 9;
	while (c >= 0)
	{
		ft_putchar(digits[c]);
		c--;
	}
}

void	ft_print_negative(int nb)
{
	int		c;
	char	digits[10];

	c = 0;
	while (c <= 9)
	{
		if ((nb / 10) != 0 || (nb % 10) != 0)
		{
			digits[c] = '0' + ((nb % 10) * -1);
			nb /= 10;
		}
		else
		{
			digits[c] = 'x';
		}
		c++;
	}
	ft_putchar('-');
	c = 9;
	while (c >= 0)
	{
		ft_putchar(digits[c]);
		c--;
	}
}
