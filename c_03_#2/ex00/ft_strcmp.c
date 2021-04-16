/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:25:24 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 15:34:46 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int pos;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	pos = 0;
	while (pos <= len1 || pos <= len2)
	{
		if (s1[pos] != s2[pos])
		{
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		}
		pos++;
	}
	return (0);
}
