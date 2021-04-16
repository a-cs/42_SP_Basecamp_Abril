/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:07:52 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/13 01:49:24 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if ((str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			str[pos] += 32;
		}
		if ((str[pos] >= 'a' && str[pos] <= 'z'))
		{
			if (!((str[pos - 1] >= 'A' && str[pos - 1] <= 'Z') ||
			(str[pos - 1] >= 'a' && str[pos - 1] <= 'z') ||
			(str[pos - 1] >= '0' && str[pos - 1] <= '9')))
			{
				str[pos] -= 32;
			}
		}
		pos++;
	}
	return (str);
}
