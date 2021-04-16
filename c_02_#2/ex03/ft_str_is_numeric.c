/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:34:41 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/08 00:02:16 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			is_numeric = 0;
			break ;
		}
		str++;
	}
	if (is_numeric == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
