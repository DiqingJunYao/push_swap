/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_seq_of_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:11:55 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:07:46 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_seq_of_nbr(t_stack *stack, int rank)
{
	int		seq;
	t_list	*temp;

	if (!stack || !stack->top)
		return (-1);
	seq = 1;
	temp = stack->top;
	while (temp && temp->content != rank)
	{
		seq++;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	return (seq);
}
