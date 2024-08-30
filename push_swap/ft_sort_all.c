/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:17:56 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 12:20:43 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_all(t_stack *astack, t_stack *bstack, int argc)
{
	int	x;

	x = 8;
	while ((x - 1) >= 0)
	{
		ft_split_astack(astack, bstack, x, argc);
		ft_sort(astack, bstack, argc);
		x--;
	}
	ft_final_move(astack);
}
