/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:07:16 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/13 19:45:38 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int pos1;
	int pos2;

	pos1 = 0;
	if (to_find[pos1] == '\0')
	{
		return (str);
	}
	while (str[pos1] != '\0')
	{
		pos2 = 0;
		while (str[pos1 + pos2] == to_find[pos2] && str[pos1 + pos2] != '\0')
		{
			if (to_find[pos2 + 1] == '\0')
			{
				return (&str[pos1]);
			}
			pos2++;
		}
		pos1++;
	}
	return (0);
}
