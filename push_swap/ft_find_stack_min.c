/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_stack_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:18:56 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 13:03:04 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_stack_seq_min(t_stack *stack)
{
	t_list	*temp;
	int		find_min;

	find_min = 0;
	temp = stack->top;
	find_min = temp->seq;
	while (temp->next != NULL)
	{
		if (find_min > temp->next->seq)
			find_min = temp->next->seq;
		temp = temp->next;
	}
	return (find_min);
}

int	ft_find_stack_min(t_stack *stack)
{
	t_list	*temp;
	int		find_min;

	find_min = 0;
	temp = stack->top;
	find_min = temp->content;
	while (temp->next != NULL)
	{
		if (find_min > temp->next->content)
			find_min = temp->next->content;
		temp = temp->next;
	}
	return (find_min);
}
