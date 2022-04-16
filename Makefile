NAME = minishell

LIBFT = mandatory/utils/libft

PRINTF = mandatory/utils/ft_printf

CC = cc 

CFLAGS = -Wall -Wextra -Werror

SRC =  mandatory/srcs/main.c mandatory/utils/get_next_line.c  mandatory/utils/get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -g -c $< -o $@
	
$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	@make -C $(PRINTF)
	@$(CC) $(CFLAGS) $(LIBFT)/libft.a $(PRINTF)/libftprintf.a $(OBJ) -lreadline -o $(NAME)

clean:
	@make clean -C $(LIBFT)
	@make clean -C $(PRINTF)
	@rm -f $(OBJ) get_next_line_utils.o  get_next_line.o
	
	
fclean : clean 
	@make fclean -C $(LIBFT)
	@make fclean -C $(PRINTF)
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
