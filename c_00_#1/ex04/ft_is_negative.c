/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:22:57 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/02 23:06:59 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char s;

	if (n >= 0)
	{
		s = 'P';
		write(1, &s, 1);
	}
	else
	{
		s = 'N';
		write(1, &s, 1);
	}
}
