/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:35:54 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/16 02:56:40 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb <= 1)
		return (0);
	else if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 2147483647)
		return (1);
	n = 5;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return (1);
}
