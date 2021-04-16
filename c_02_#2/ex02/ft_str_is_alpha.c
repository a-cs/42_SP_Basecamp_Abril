/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:23:26 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/07 23:56:49 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			is_alpha = 0;
			break ;
		}
		str++;
	}
	if (is_alpha == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
