/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:57:51 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/15 19:41:51 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int pow_nb;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pow_nb = nb;
	while (power > 1)
	{
		pow_nb *= nb;
		power--;
	}
	return (pow_nb);
}
