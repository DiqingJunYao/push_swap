/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:49:53 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 13:04:28 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_final_move(t_stack *astack)
{
	int		min;

	min = ft_find_stack_seq_min(astack);
	ft_put_elmt_top_a(astack, min);
}
