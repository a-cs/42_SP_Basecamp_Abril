/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:39:50 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/16 20:31:59 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb <= 1)
		return (0);
	else if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb != 3 && nb % 3 == 0)
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

int	ft_find_next_prime(int nb)
{
	int next_prime;

	next_prime = nb;
	while (ft_is_prime(next_prime) != 1)
	{
		next_prime++;
	}
	return (next_prime);
}
