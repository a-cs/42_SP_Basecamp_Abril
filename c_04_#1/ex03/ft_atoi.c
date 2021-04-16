/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:43:17 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/15 01:40:37 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int pos;
	int count_minus;
	int number;

	number = 0;
	count_minus = 0;
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '-')
			count_minus++;
		else if (str[pos] >= '0' && str[pos] <= '9')
			number = number * 10 + (str[pos] - '0');
		else if ((str[pos] >= 'a' && str[pos] <= 'z') ||
		(str[pos] >= 'A' && str[pos] <= 'Z'))
			break ;
		pos++;
	}
	if ((count_minus % 2) == 1)
	{
		number = -1 * number;
	}
	return (number);
}
