/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:52:27 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 13:03:45 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move(t_stack *astack, t_stack *bstack)
{
	int	bstack_max;

	bstack_max = ft_find_stack_seq_max(bstack);
	ft_put_elmt_top_b(bstack, bstack_max);
	ft_pa(astack, bstack);
}
