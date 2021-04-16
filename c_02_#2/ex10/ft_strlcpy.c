/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:39:37 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/09 00:58:46 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;

	len = 0;
	if (size > 0)
	{
		while (len < (size - 1))
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
