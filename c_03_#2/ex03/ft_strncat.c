/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:50:11 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/12 22:04:59 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int ldest;
	unsigned int pos;

	ldest = 0;
	while (dest[ldest] != '\0')
	{
		ldest++;
	}
	pos = 0;
	while (pos < nb && src[pos] != '\0')
	{
		dest[ldest + pos] = src[pos];
		pos++;
	}
	dest[ldest + pos] = '\0';
	return (dest);
}
