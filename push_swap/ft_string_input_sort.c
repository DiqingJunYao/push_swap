/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_input_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:41:08 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:21:30 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_string_input_sort(t_stack *astack, t_stack *bstack)
{
	int	stack_elmt_nbr;

	stack_elmt_nbr = ft_find_elmt_of_stacks(astack);
	if (stack_elmt_nbr <= 5)
		ft_easy_sort_v2(astack, bstack, stack_elmt_nbr);
	else
	{
		ft_get_all_seq(astack);
		ft_sort_all(astack, bstack, stack_elmt_nbr + 1);
		ft_free_stack(astack);
		ft_free_stack(bstack);
	}
}
