/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string_input.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:28:25 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 14:31:47 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string_input(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc == 2)
	{
		while (argv[1][index])
		{
			if (argv[1][index] == ' ')
				return (1);
			index++;
		}
	}
	return (0);
}
