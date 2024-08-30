/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:42:19 by dyao              #+#    #+#             */
/*   Updated: 2024/07/30 16:19:14 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *astack)
{
	t_list	*temp_iter;
	t_list	*temp_find_the_last;

	if (!astack || !astack->top || !astack->top->next)
		return ;
	temp_iter = astack->top;
	while (temp_iter->next->next != NULL)
		temp_iter = temp_iter->next;
	temp_find_the_last = temp_iter->next;
	temp_iter->next = NULL;
	temp_find_the_last->next = astack->top;
	astack->top = temp_find_the_last;
	write(1, "rra\n", 4);
}
