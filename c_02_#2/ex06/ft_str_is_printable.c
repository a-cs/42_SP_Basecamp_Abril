/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:15:21 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/13 02:01:24 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str < 127))
		{
			is_printable = 0;
			break ;
		}
		str++;
	}
	if (is_printable == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
