/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_astack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:05:09 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 12:26:40 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_between(t_stack *stack, int min_nbr, int max_nbr)
{
	t_list	*temp;

	temp = stack->top;
	while (temp != NULL)
	{
		if (temp->seq > max_nbr || temp->seq <= min_nbr)
			temp = temp->next;
		else
			return (1);
	}
	return (0);
}

void	ft_split_astack(t_stack *astack, t_stack *bstack, int x, int argc)
{
	t_list	*temp;

	while (ft_check_between(astack, ((argc - 1) * (x - 1) / 8),
			((argc - 1) * x / 8)) != 0)
	{
		temp = astack->top;
		if (temp->seq <= ((argc - 1) * x / 8)
			&& temp->seq > ((argc - 1) * (x - 1) / 8))
			ft_pb(astack, bstack);
		else
			ft_ra(astack);
	}
}
