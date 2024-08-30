# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:34:59 by dyao              #+#    #+#              #
#    Updated: 2024/08/03 15:10:17 by dyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        =   ./ft_atoi.c \
				./ft_check_duplicate_nbr.c \
				./ft_check_string_input.c \
				./ft_check.c \
				./ft_easy_sort_v2.c \
				./ft_easy_sort.c \
				./ft_fill_the_stack_v2.c \
				./ft_fill_the_stack.c \
				./ft_final_move.c \
				./ft_find_elmt_of_stacks.c \
				./ft_find_seq_of_nbr.c \
				./ft_find_seq_of_seq.c \
				./ft_find_stack_max.c \
				./ft_find_stack_min.c \
				./ft_free_and_exit.c \
				./ft_free_stack.c \
				./ft_get_all_seq.c \
				./ft_identity_check.c \
				./ft_move.c \
				./ft_put_elmt_top.c \
				./ft_sort_all.c \
				./ft_sort.c \
				./ft_split_astack.c \
				./ft_split.c \
				./ft_string_input_sort.c \
				./ft_pa.c \
				./ft_pb.c \
				./ft_ra.c \
				./ft_rb.c \
				./ft_rr.c \
				./ft_rra.c \
				./ft_rrb.c \
				./ft_rrr.c \
				./ft_sa.c \
				./ft_sb.c \
				./ft_ss.c \
				./main.c

LIBFTDIR	= 	libft/

LIBFTOBJS	= 	libft.a

OBJS		= 	$(SRCS:.c=.o)

CC			= 	cc

RM			= 	rm -f

CCFLAGS		= 	-Wall -Werror -Wextra -I.

NAME		= 	push_swap.a

all:			libft_build $(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CCFLAGS) $(SRCS) -o push_swap
				cp $(LIBFTDIR)$(LIBFTOBJS) $(NAME)
				ar rcs $(NAME) $(OBJS)

libft_build:
				$(MAKE) -C $(LIBFTDIR)

clean:
				$(RM) $(OBJS)
				$(RM) push_swap
				cd $(LIBFTDIR) && $(MAKE) clean

fclean:			clean
				$(RM) $(NAME)
				cd $(LIBFTDIR) && $(MAKE) fclean

re:				fclean all

.PHONY:			all clean fclean re $(LIBFTDIR)
