/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:08:41 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/13 02:01:38 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex_table;
	int		div;
	int		mod;

	hex_table = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	ft_putchar('\\');
	ft_putchar(hex_table[div]);
	ft_putchar(hex_table[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str < 127))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_print_hex(*(unsigned char *)str);
		}
		str++;
	}
}
