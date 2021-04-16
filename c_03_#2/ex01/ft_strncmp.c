/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:39:46 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/14 20:24:12 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int pos;

	pos = 0;
	while (pos < n)
	{
		if (s1[pos] != s2[pos] || s1[pos] == '\0' || s2[pos] == '\0')
		{
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		}
		pos++;
	}
	return (0);
}
