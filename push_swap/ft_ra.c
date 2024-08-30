/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:20:17 by dyao              #+#    #+#             */
/*   Updated: 2024/07/30 16:24:03 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *astack)
{
	t_list	*temp_hold_stack_top;
	t_list	*temp_iter;

	if (astack->top == NULL || astack->top->next == NULL)
		return ;
	temp_hold_stack_top = astack->top->next;
	temp_iter = astack->top;
	while (temp_iter->next != NULL)
		temp_iter = temp_iter->next;
	astack->top->next = NULL;
	temp_iter->next = astack->top;
	astack->top = temp_hold_stack_top;
	write(1, "ra\n", 3);
}
