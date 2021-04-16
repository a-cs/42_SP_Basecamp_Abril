/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:58:04 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 22:05:32 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int ldest;
	int pos;

	ldest = 0;
	while (dest[ldest] != '\0')
	{
		ldest++;
	}
	pos = 0;
	while (src[pos] != '\0')
	{
		dest[ldest + pos] = src[pos];
		pos++;
	}
	dest[ldest + pos] = '\0';
	return (dest);
}
