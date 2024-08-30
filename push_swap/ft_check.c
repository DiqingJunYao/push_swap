/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:33:00 by dyao              #+#    #+#             */
/*   Updated: 2024/07/30 15:19:29 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(t_stack *astack, int argc)
{
	int		count_argc;
	t_list	*temp;

	temp = astack->top;
	count_argc = 0;
	while (temp != NULL)
	{
		count_argc++;
		temp = temp->next;
	}
	if (count_argc != (argc - 1))
		return (1);
	return (0);
}
