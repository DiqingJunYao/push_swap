/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_seq_of_seq.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:08:11 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:08:37 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_seq_of_seq(t_stack *stack, int rank)
{
	int		seq;
	t_list	*temp;

	if (!stack || !stack->top)
		return (-1);
	seq = 1;
	temp = stack->top;
	while (temp && temp->seq != rank)
	{
		seq++;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	return (seq);
}
