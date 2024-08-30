/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:27:47 by dyao              #+#    #+#             */
/*   Updated: 2024/08/01 20:22:12 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *astack)
{
	t_list	*temp;

	temp = astack->top;
	while (temp != NULL)
	{
		temp = astack->top->next;
		free(astack->top);
		astack->top = temp;
	}
}
