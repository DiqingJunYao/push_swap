/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate_nbr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:08:41 by dyao              #+#    #+#             */
/*   Updated: 2024/08/01 20:24:56 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate_nbr(int nbr)
{
	static int	array[1000];
	static int	i;
	int			n;

	array[i] = nbr;
	n = i - 1;
	i++;
	while (n >= 0)
	{
		if (nbr == array[n])
			return (1);
		else
			n--;
	}
	return (0);
}
