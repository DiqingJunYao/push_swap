/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_exit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:03:18 by dyao              #+#    #+#             */
/*   Updated: 2024/08/02 21:07:29 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_and_exit(t_list *temp, t_list *a)
{
	t_list	*b;

	while (temp)
	{
		b = temp;
		temp = b->next;
		free (b);
	}
	free (a);
	exit (EXIT_FAILURE);
}
