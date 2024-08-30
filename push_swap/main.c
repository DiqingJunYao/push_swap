/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:06:29 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 14:57:46 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	astack;
	t_stack	bstack;
	t_list	*a;

	bstack.top = NULL;
	if (argc > 1)
	{
		a = ft_fill_the_stack(argc, argv);
		astack.top = a;
		ft_identity_check(&astack);
		if (argc <= 6)
			ft_easy_sort(&astack, &bstack, argc, argv);
		else
		{
			ft_get_all_seq(&astack);
			ft_sort_all(&astack, &bstack, argc);
			ft_free_stack(&astack);
			ft_free_stack(&bstack);
		}
	}
	else
		exit(EXIT_FAILURE);
}
