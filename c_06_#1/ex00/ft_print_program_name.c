/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarneir <acarneir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:06:52 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/16 15:02:17 by acarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int pos;

	if (argc >= 1)
	{
		pos = 0;
		while (argv[0][pos] != '\0')
		{
			write(1, &argv[0][pos], 1);
			pos++;
		}
		write(1, &"\n", 1);
	}
	return (0);
}
