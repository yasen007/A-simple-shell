# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 15:37:01 by yelgharo          #+#    #+#              #
#    Updated: 2022/04/09 00:36:38 by yelgharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a

CC = gcc

GCC_FLAGS := -Wall -Wextra -Werror

SRCS := ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c \
			ft_atoi.c     ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
			ft_bzero.c    ft_itoa.c    ft_putendl_fd.c ft_strjoin.c  ft_strrchr.c \
			ft_calloc.c   ft_memchr.c  ft_putnbr_fd.c  ft_strlcat.c  ft_strtrim.c \
			ft_isalnum.c  ft_memcmp.c  ft_putstr_fd.c  ft_strlcpy.c  ft_substr.c  \
			ft_isalpha.c  ft_memcpy.c  ft_split.c      ft_strlen.c   ft_tolower.c \
			ft_isascii.c  ft_memmove.c ft_strchr.c     ft_strmapi.c  ft_toupper.c \
			
BSRCS := ft_lstadd_back.c  ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c \
			ft_lstnew.c ft_lstsize.c ft_lstclear.c ft_lstiter.c  ft_lstmap.c

LIB := libft.h

OBJS := $(SRCS:.c=.o)

BOBJS:= $(BSRCS:.c=.o)

all: $(NAME)

%.o:%.c libft.h
	@$(CC) $(GCC_FLAGS) -c $<
	
$(NAME) : $(OBJS) $(LIB)
	@ar rc $(NAME) $(OBJS)

bonus : all $(BOBJS)
	@ar rc $(NAME) $(OBJS) $(BOBJS)

clean:
	@rm -f $(OBJS) $(BOBJS)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all bonus clean fclean re
