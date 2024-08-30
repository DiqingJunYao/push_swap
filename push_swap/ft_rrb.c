/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:46:06 by dyao              #+#    #+#             */
/*   Updated: 2024/08/01 16:35:32 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_stack *bstack)
{
	t_list	*temp_iter;
	t_list	*temp_find_the_last;

	if (!bstack || !bstack->top || !bstack->top->next)
		return ;
	temp_iter = bstack->top;
	while (temp_iter->next->next != NULL)
		temp_iter = temp_iter->next;
	temp_find_the_last = temp_iter->next;
	temp_iter->next = NULL;
	temp_find_the_last->next = bstack->top;
	bstack->top = temp_find_the_last;
	write(1, "rrb\n", 4);
}
