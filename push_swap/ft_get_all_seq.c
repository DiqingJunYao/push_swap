/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_seq.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:12:41 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:52:39 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_seq_filled(t_stack *astack)
{
	t_list	*temp;

	temp = astack->top;
	while (temp)
	{
		if (temp->seq == 0)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	ft_find_sec_min(t_stack *astack, int min)
{
	int		second_min;
	t_list	*temp;

	temp = astack->top;
	second_min = ft_find_stack_max(astack);
	if (min == second_min)
		return (min);
	while (temp)
	{
		if (temp->content > min && temp->content < second_min)
			second_min = temp->content;
		temp = temp->next;
	}
	return (second_min);
}

void	ft_fill_seq(t_stack *astack, int min, int i)
{
	int		second_min;
	t_list	*temp;

	second_min = ft_find_sec_min(astack, min);
	temp = astack->top;
	while (temp)
	{
		if (temp->content == second_min)
		{
			temp->seq = i;
			break ;
		}
		temp = temp->next;
	}
}

void	ft_get_all_seq(t_stack *astack)
{
	int		i;
	int		min;
	t_list	*temp;

	i = 1;
	min = ft_find_stack_min(astack);
	temp = astack->top;
	while (temp->content != min)
		temp = temp->next;
	temp->seq = i;
	i++;
	while (ft_check_seq_filled(astack) != 0)
	{
		ft_fill_seq(astack, min, i);
		min = ft_find_sec_min(astack, min);
		i++;
	}
}
