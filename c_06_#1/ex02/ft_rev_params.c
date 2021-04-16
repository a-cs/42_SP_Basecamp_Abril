/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:30:42 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/16 04:37:01 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int pos1;
	int pos2;

	if (argc > 1)
	{
		pos1 = argc - 1;
		while (pos1 > 0)
		{
			pos2 = 0;
			while (argv[pos1][pos2] != '\0')
			{
				write(1, &argv[pos1][pos2], 1);
				pos2++;
			}
			write(1, &"\n", 1);
			pos1--;
		}
	}
	return (0);
}
