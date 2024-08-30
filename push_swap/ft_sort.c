/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:40:15 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 13:08:42 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *astack, t_stack *bstack, int argc)
{
	static int	temp;

	while (ft_check(astack, argc) != 0)
	{
		if (temp != 0)
			ft_put_elmt_top_a(astack, temp);
		ft_move(astack, bstack);
		temp = astack->top->seq;
	}
}
//this is the problem!