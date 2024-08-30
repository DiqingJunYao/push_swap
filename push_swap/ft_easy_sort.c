/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_easy_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:49:37 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:46:38 by dyao             ###   ########.fr       */
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

	ft_get_all_seq(astack);
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

	ft_get_all_seq(astack);
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

void	ft_easy_sort(t_stack *astack, t_stack *bstack, int argc, char **argv)
{
	if (argc == 2 && ft_check_string_input(argc, argv) == 0)
	{
		ft_free_stack(astack);
		exit (EXIT_SUCCESS);
	}
	else if (argc == 2 && ft_check_string_input(argc, argv) == 1)
		ft_string_input_sort(astack, bstack);
	else if (argc == 3)
	{
		ft_sa(astack);
		ft_free_stack(astack);
		exit (EXIT_SUCCESS);
	}
	else if (argc == 4)
		ft_easy_sort_1(astack);
	else if (argc == 5)
		ft_easy_sort_2(astack, bstack);
	else
		ft_easy_sort_3(astack, bstack);
}
