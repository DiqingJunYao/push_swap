/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_elmt_of_stacks.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:10:44 by dyao              #+#    #+#             */
/*   Updated: 2024/07/30 16:03:18 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_elmt_of_stacks(t_stack *stack)
{
	int		stack_elmt_nbr;
	t_list	*temp;

	if (!stack)
		return (-1);
	stack_elmt_nbr = 0;
	temp = stack->top;
	while (temp)
	{
		stack_elmt_nbr++;
		temp = temp->next;
	}
	return (stack_elmt_nbr);
}
