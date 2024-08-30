/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:17:49 by dyao              #+#    #+#             */
/*   Updated: 2024/08/03 15:51:00 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				seq;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list	*top;
}	t_stack;

long	ft_atoi(const char *str);
void	ft_pa(t_stack *astack, t_stack *bstack);
void	ft_pb(t_stack *astack, t_stack *bstack);
void	ft_ra(t_stack *astack);
void	ft_rb(t_stack *bstack);
void	ft_rr(t_stack *astack, t_stack *bstack);
void	ft_rra(t_stack *astack);
void	ft_rrb(t_stack *bstack);
void	ft_rrr(t_stack *astack, t_stack *bstack);
void	ft_sa(t_stack *astack);
void	ft_sb(t_stack *bstack);
void	ft_ss(t_stack *astack, t_stack *bstack);
int		ft_check_duplicate_nbr(int nbr);
int		ft_check_string_input(int argc, char **argv);
int		ft_check(t_stack *astack, int argc);
void	ft_easy_sort_v2(t_stack *astack, t_stack *bstack, int stack_elmt_nbr);
void	ft_easy_sort(t_stack *astack, t_stack *bstack, int argc, char **argv);
t_list	*ft_fill_the_stack(int argc, char **argv);
t_list	*ft_initialize_list_v2(char **data);
void	ft_fill_the_list_v2(char **data, t_list *temp);
void	ft_final_move(t_stack *astack);
int		ft_find_elmt_of_stacks(t_stack *stack);
int		ft_find_seq_of_nbr(t_stack *stack, int nbr);
int		ft_find_seq_of_seq(t_stack *stack, int rank);
int		ft_find_stack_max(t_stack *stack);
int		ft_find_stack_seq_max(t_stack *stack);
int		ft_find_stack_min(t_stack *stack);
int		ft_find_stack_seq_min(t_stack *stack);
void	ft_free_and_exit(t_list *temp, t_list *a);
void	ft_free_stack(t_stack *astack);
void	ft_get_all_seq(t_stack *astack);
void	ft_identity_check(t_stack *astack);
void	ft_move(t_stack *astack, t_stack *bstack);
void	ft_put_elmt_top_a(t_stack *stack, int nbr);
void	ft_put_elmt_top_b(t_stack *stack, int nbr);
void	ft_sort_all(t_stack *astack, t_stack *bstack, int argc);
void	ft_sort(t_stack *astack, t_stack *bstack, int argc);
void	ft_split_astack(t_stack *astack, t_stack *bstack, int x, int argc);
char	**ft_split(char const *s, char c);
void	ft_string_input_sort(t_stack *astack, t_stack *bstack);

#endif