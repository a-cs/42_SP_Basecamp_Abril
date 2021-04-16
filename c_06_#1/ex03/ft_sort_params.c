/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:40:21 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/16 14:53:17 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		pos++;
	}
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int pos1;
	int pos2;

	if (argc > 1)
	{
		pos1 = 1;
		while (pos1 < argc)
		{
			pos2 = 0;
			while (argv[pos1][pos2] != '\0')
			{
				write(1, &argv[pos1][pos2], 1);
				pos2++;
			}
			write(1, &"\n", 1);
			pos1++;
		}
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		pos1;
	int		pos2;

	if (argc > 1)
	{
		pos1 = 1;
		while (pos1 < argc - 1)
		{
			pos2 = pos1 + 1;
			while (pos2 < argc)
			{
				if (ft_strcmp(argv[pos1], argv[pos2]) > 0)
				{
					temp = argv[pos1];
					argv[pos1] = argv[pos2];
					argv[pos2] = temp;
				}
				pos2++;
			}
			pos1++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
