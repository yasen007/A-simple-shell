#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include "../utils/libft/libft.h"
# include "../utils/ft_printf/ft_printf.h"

# define BUFFER_SIZE 1

char	*get_next_line(int fd);
int		ft_strchr_custom(char *s);
char	*ft_strjoin_custom(char *s1, char *s2);

void	ft_prompt(char *line);

#endif