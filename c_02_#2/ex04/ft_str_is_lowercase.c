/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:03:12 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/08 00:06:23 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			is_lowercase = 0;
			break ;
		}
		str++;
	}
	if (is_lowercase == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
