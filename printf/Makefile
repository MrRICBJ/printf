# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 12:47:42 by bjanette          #+#    #+#              #
#    Updated: 2021/11/26 20:38:01 by bjanette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 	= libftprintf.a
LIST 	= ft_putnbr_u.c \
			ft_printf.c \
			ft_condition.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strlen.c \
			ft_obr.c \
			ft_sixte_a.c \
			ft_sixteen_A.c \
			ft_flags.c \
			ft_initialise_tmp.c \
			ft_prc_d_i.c \
			ft_prc_u.c \
			ft_prs_x_X.c \
			ft_chet.c\
			ft_10.c\
			ft_16.c \
			ft_wdt.c \
			ft_minus_wdt.c \
			ft_minus_wdt_d.c \
			ft_sp.c \
			ft_condition_2.c
LIST_B = ft_putnbr_u_bonus.c \
			ft_printf_bonus.c \
			ft_condition_bonus.c \
			ft_putchar_bonus.c \
			ft_putstr_bonus.c \
			ft_putnbr_bonus.c \
			ft_strlen_bonus.c \
			ft_obr_bonus.c \
			ft_sixte_a_bonus.c \
			ft_sixteen_A_bonus.c \
			ft_flags_bonus.c \
			ft_initialise_tmp_bonus.c \
			ft_prc_d_i_bonus.c \
			ft_prc_u_bonus.c \
			ft_prs_x_X_bonus.c \
			ft_chet_bonus.c\
			ft_10_bonus.c\
			ft_16_bonus.c \
			ft_wdt_bonus.c \
			ft_minus_wdt_bonus.c \
			ft_minus_wdt_d_bonus.c \
			ft_sp_bonus.c \
			ft_condition_2_bonus.c
OBJ 	= $(LIST:.c=.o)
OBJ_B 	= $(LIST_B:.c=.o)
FLAGS 	= -Wall -Wextra -Werror
HEAD 	= libftprintf.h

all		: 	$(Name)
$(Name)	: 	$(OBJ)
		ar rcs $(Name) $?
$(OBJ)	: $(HEAD) Makefile

%.o 	: %.c
		cc $(FLAGS) -O2 -c $< -o $@

bonus	:  
		make OBJ="$(OBJ_B)" all

clean	: 
		rm -f $(OBJ) $(OBJ_B)
	
fclean	: clean
		rm -f $(Name)

re		: fclean all

.PHONY	: all clean fclean re bonus
