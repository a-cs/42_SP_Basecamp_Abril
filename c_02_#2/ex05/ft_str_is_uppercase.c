/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:10:09 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/08 00:13:58 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int is_uppercase;

	is_uppercase = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			is_uppercase = 0;
			break ;
		}
		str++;
	}
	if (is_uppercase == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
