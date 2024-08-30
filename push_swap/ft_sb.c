/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:05:54 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:38:21 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack *bstack)
{
	t_list	*temp1;
	t_list	*temp2;
	int		tempdata;

	if (!bstack->top || !bstack->top->next)
		return ;
	temp1 = bstack->top;
	temp2 = temp1->next;
	tempdata = temp1->content;
	temp1->content = temp2->content;
	temp2->content = tempdata;
	write(1, "sb\n", 3);
}
