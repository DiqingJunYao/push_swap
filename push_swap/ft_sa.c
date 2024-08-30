/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:55:04 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:38:44 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *astack)
{
	t_list	*temp1;
	t_list	*temp2;
	int		tempdata;

	temp1 = astack->top;
	temp2 = temp1->next;
	if (!astack->top || !temp1->next)
		return ;
	tempdata = temp1->content;
	temp1->content = temp2->content;
	temp2->content = tempdata;
	write(1, "sa\n", 3);
}
