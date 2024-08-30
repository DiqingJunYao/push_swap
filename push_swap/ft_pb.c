/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:17:02 by dyao              #+#    #+#             */
/*   Updated: 2024/07/30 15:35:44 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack *astack, t_stack *bstack)
{
	t_list	*temp_hold_top_a;
	t_list	*temp_stack_b_top;
	t_list	*new_top;

	if (!astack->top)
		return ;
	temp_hold_top_a = astack->top->next;
	temp_stack_b_top = bstack->top;
	new_top = astack->top;
	new_top->next = temp_stack_b_top;
	bstack->top = new_top;
	astack->top = temp_hold_top_a;
	write(1, "pb\n", 3);
}
