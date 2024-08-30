/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_easy_sort_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:50:50 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:41:44 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_easy_sort_0(t_stack *astack)
{
	int	max;
	int	max_nbr;

	max = ft_find_stack_max(astack);
	max_nbr = ft_find_seq_of_nbr(astack, max);
	if (max_nbr == 1)
	{
		ft_ra(astack);
		if (astack->top->content > astack->top->next->content)
			ft_sa(astack);
	}
	else if (max_nbr == 2)
	{
		ft_rra(astack);
		if (astack->top->content > astack->top->next->content)
			ft_sa(astack);
	}
	else
		ft_sa(astack);
}

static void	ft_easy_sort_1(t_stack *astack)
{
	ft_easy_sort_0(astack);
	ft_free_stack(astack);
	exit (EXIT_SUCCESS);
}

static void	ft_easy_sort_2(t_stack *astack, t_stack *bstack)
{
	int	max;

	max = ft_find_stack_seq_max(astack);
	ft_put_elmt_top_a(astack, max);
	ft_pb(astack, bstack);
	ft_easy_sort_0(astack);
	ft_pa(astack, bstack);
	ft_ra(astack);
	ft_free_stack(astack);
	exit (EXIT_SUCCESS);
}

static void	ft_easy_sort_3(t_stack *astack, t_stack *bstack)
{
	int	max;

	max = ft_find_stack_seq_max(astack);
	ft_put_elmt_top_a(astack, max);
	ft_pb(astack, bstack);
	max = ft_find_stack_seq_max(astack);
	ft_put_elmt_top_a(astack, max);
	ft_pb(astack, bstack);
	ft_sb(bstack);
	ft_easy_sort_0(astack);
	ft_pa(astack, bstack);
	ft_pa(astack, bstack);
	ft_ra(astack);
	ft_ra(astack);
	ft_free_stack(astack);
	exit (EXIT_SUCCESS);
}

void	ft_easy_sort_v2(t_stack *astack, t_stack *bstack, int stack_elmt_nbr)
{
	if (stack_elmt_nbr == 1)
	{
		ft_free_stack(astack);
		exit (EXIT_SUCCESS);
	}
	else if (stack_elmt_nbr == 2)
	{
		ft_sa(astack);
		ft_free_stack(astack);
		exit (EXIT_SUCCESS);
	}
	else if (stack_elmt_nbr == 3)
		ft_easy_sort_1(astack);
	else if (stack_elmt_nbr == 4)
	{
		ft_get_all_seq(astack);
		ft_easy_sort_2(astack, bstack);
	}
	else
	{
		ft_get_all_seq(astack);
		ft_easy_sort_3(astack, bstack);
	}
}
