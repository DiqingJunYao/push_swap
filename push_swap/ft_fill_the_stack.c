/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_the_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:16:08 by dyao              #+#    #+#             */
/*   Updated: 2024/08/06 19:20:13 by dyao             ###   ########.fr       */
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

t_list	*ft_initialize_list(char **argv)
{
	int		i;
	t_list	*a;
	t_list	*temp;

	i = 1;
	a = ft_creat_a_t_list();
	a->content = ft_check_and_output_nbr(argv[i]);
	if (a->content == INT_MAX)
	{
		free (a);
		exit (EXIT_FAILURE);
	}
	i = ft_check_duplicate_nbr(a->content);
	temp = a;
	return (temp);
}

void	ft_fill_the_list(int argc, char **argv, t_list *temp)
{
	int		i;
	t_list	*a;
	t_list	*b;

	i = 2;
	a = temp;
	while (i < argc)
	{
		b = a;
		a = ft_creat_a_t_list();
		a->content = ft_check_and_output_nbr(argv[i]);
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

t_list	*ft_fill_the_stack(int argc, char **argv)
{
	char	**data;
	int		i;
	t_list	*temp;

	if (ft_check_string_input(argc, argv) == 1)
	{
		data = ft_split(argv[1], ' ');
		temp = ft_initialize_list_v2(data);
		ft_fill_the_list_v2(data, temp);
		i = 0;
		while (data[i])
		{
			free (data[i]);
			i++;
		}
		free (data);
	}
	else
	{
		temp = ft_initialize_list(argv);
		ft_fill_the_list(argc, argv, temp);
	}
	return (temp);
}
