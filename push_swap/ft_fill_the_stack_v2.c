/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_the_stack_v2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:03:00 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 14:15:51 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_creat_a_t_list(void)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
	{
		write(2, "memory allocation failed!", 26);
		exit (EXIT_FAILURE);
	}
	a->content = 0;
	a->next = NULL;
	a->seq = 0;
	return (a);
}

static int	ft_check_and_output_nbr(char *str)
{
	int		i;
	long	a;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			i++;
		else
		{
			write(2, "error\n", 6);
			return (INT_MAX);
		}
	}
	a = ft_atoi(str);
	if (a > 2147483647 || a < -2147483648)
	{
		write(2, "error\n", 6);
		return (INT_MAX);
	}
	return (a);
}

t_list	*ft_initialize_list_v2(char **data)
{
	int		i;
	t_list	*a;
	t_list	*temp;

	i = 0;
	a = ft_creat_a_t_list();
	a->content = ft_check_and_output_nbr(data[i]);
	if (a->content == INT_MAX)
	{
		free (a);
		exit (EXIT_FAILURE);
	}
	temp = a;
	return (temp);
}

void	ft_fill_the_list_v2(char **data, t_list *temp)
{
	int		i;
	t_list	*a;
	t_list	*b;

	i = 1;
	a = temp;
	while (data[i])
	{
		b = a;
		a = ft_creat_a_t_list();
		a->content = ft_check_and_output_nbr(data[i]);
		if (a->content == INT_MAX)
			ft_free_and_exit(temp, a);
		if (ft_check_duplicate_nbr(a->content) == 1)
		{
			write(2, "error\n", 6);
			ft_free_and_exit(temp, a);
		}
		b->next = a;
		i++;
	}
	a->next = NULL;
}
