/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identity_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:36:23 by dyao              #+#    #+#             */
/*   Updated: 2024/08/02 16:54:21 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max_check(int *elmt, int i)
{
	int	max;
	int	index;

	if (i <= 0)
		return (0);
	max = elmt[0];
	index = 1;
	while (index < i)
	{
		if (elmt[index] > max)
			max = elmt[index];
		index++;
	}
	index = 0;
	while (index < i && elmt[index] != max)
		index++;
	if (index == (i - 1))
		return (0);
	return (1);
}

int	*ft_fill_in(t_stack *astack, int i)
{
	int		*elmt;
	int		j;
	t_list	*temp;

	j = 0;
	elmt = (int *)malloc(i * sizeof(int));
	temp = astack->top;
	while (j < i)
	{
		elmt[j] = temp->content;
		j++;
		temp = temp->next;
	}
	return (elmt);
}

void	ft_identity_check(t_stack *astack)
{
	int		i;
	int		j;
	int		elmt_nbr;
	int		*elmt;

	j = 0;
	elmt_nbr = ft_find_elmt_of_stacks(astack);
	i = 2;
	while (i <= elmt_nbr)
	{
		elmt = ft_fill_in(astack, i);
		if (ft_find_max_check(elmt, i) == 0)
		{
			free (elmt);
			i++;
		}
		else
		{
			free (elmt);
			return ;
		}
	}
	ft_free_stack(astack);
	exit (EXIT_SUCCESS);
}
