/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_elmt_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:35:41 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:09:11 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_elmt_top_a(t_stack *stack, int rank)
{
	int	rank_seq;
	int	stack_elmt_nbr;

	if (stack->top->next == NULL || stack->top == NULL)
		return ;
	rank_seq = ft_find_seq_of_seq(stack, rank);
	stack_elmt_nbr = ft_find_elmt_of_stacks(stack);
	if (rank_seq > (stack_elmt_nbr / 2))
	{
		while (stack->top->seq != rank)
			ft_rra(stack);
	}
	else
	{
		while (stack->top->seq != rank)
			ft_ra(stack);
	}
}

void	ft_put_elmt_top_b(t_stack *stack, int rank)
{
	int	rank_seq;
	int	stack_elmt_nbr;

	if (stack->top->next == NULL || stack->top == NULL)
		return ;
	rank_seq = ft_find_seq_of_seq(stack, rank);
	stack_elmt_nbr = ft_find_elmt_of_stacks(stack);
	if (rank_seq > (stack_elmt_nbr / 2))
	{
		while (stack->top->seq != rank)
			ft_rrb(stack);
	}
	else
	{
		while (stack->top->seq != rank)
			ft_rb(stack);
	}
}
