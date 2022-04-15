# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 21:33:11 by yelgharo          #+#    #+#              #
#    Updated: 2022/04/09 07:49:40 by yelgharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC := ft_printf.c ft_put_first.c  ft_put_sec.c  ft_conditions.c

OBJ := $(SRC:.c=.o)

all : $(NAME)

%.o:%.c ft_printf.h
	@$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)

bonus : all

clean :
	@rm -f $(OBJ)

fclean : clean 
	@rm -f $(NAME) 

re : fclean all

.PHONY : clean fclean re
