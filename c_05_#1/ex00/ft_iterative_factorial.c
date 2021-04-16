/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:34:59 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/15 14:45:57 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	if (nb == 0)
		factorial = 1;
	else
	{
		while (nb >= 1)
		{
			factorial *= nb;
			nb--;
		}
	}
	return (factorial);
}
