/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_stack_max.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:18:05 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 13:02:34 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_stack_seq_max(t_stack *stack)
{
	t_list	*temp;
	int		find_max;

	find_max = 0;
	temp = stack->top;
	find_max = temp->seq;
	while (temp->next)
	{
		if (find_max < temp->next->seq)
			find_max = temp->next->seq;
		temp = temp->next;
	}
	return (find_max);
}

int	ft_find_stack_max(t_stack *stack)
{
	t_list	*temp;
	int		find_max;

	find_max = 0;
	temp = stack->top;
	find_max = temp->content;
	while (temp->next)
	{
		if (find_max < temp->next->content)
			find_max = temp->next->content;
		temp = temp->next;
	}
	return (find_max);
}
