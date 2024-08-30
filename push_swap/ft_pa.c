/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:09:27 by dyao              #+#    #+#             */
/*   Updated: 2024/08/01 16:35:20 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *astack, t_stack *bstack)
{
	t_list	*temp_hold_top_b;
	t_list	*temp_stack_a_top;
	t_list	*new_top;

	if (!bstack->top)
		return ;
	temp_hold_top_b = bstack->top->next;
	temp_stack_a_top = astack->top;
	new_top = bstack->top;
	new_top->next = temp_stack_a_top;
	astack->top = new_top;
	bstack->top = temp_hold_top_b;
	write(1, "pa\n", 3);
}
