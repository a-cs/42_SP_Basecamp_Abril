/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:04:49 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/09 00:50:51 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if ((str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			str[pos] += 32;
		}
		pos++;
	}
	return (str);
}
