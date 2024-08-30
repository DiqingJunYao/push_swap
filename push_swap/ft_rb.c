/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:39:31 by dyao              #+#    #+#             */
/*   Updated: 2024/08/01 16:35:27 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack *bstack)
{
	t_list	*temp_hold_stack_top;
	t_list	*temp_iter;

	if (bstack->top == NULL || bstack->top->next == NULL)
		return ;
	temp_hold_stack_top = bstack->top->next;
	temp_iter = bstack->top;
	while (temp_iter->next != NULL)
		temp_iter = temp_iter->next;
	bstack->top->next = NULL;
	temp_iter->next = bstack->top;
	bstack->top = temp_hold_stack_top;
	write(1, "rb\n", 3);
}
