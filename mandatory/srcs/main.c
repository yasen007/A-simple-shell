/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:57:36 by yelgharo          #+#    #+#             */
/*   Updated: 2022/04/16 13:37:29 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_free(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	check_in(char *cmd)
{
	int i;
	char *str;

	i = 0;
	str = ft_split(cmd);
	
	while(str[i])
	{
		if (!ft_strncmp(str[i], "exit", 4))
		{
			ft_free(str);
			exit(0);
		}
		else if (!ft_strncmp(str[i], "echo", 4))
		{
			i++;
			while (str[i])
			{
				ft_printf("%s ", str[i]);
				i++;
			}
			ft_printf("\n");
		}
		else 
			return;
	}
	return ;
}

void	ft_prompt(char *line)
{
	write(1, "$> ", 3);
	line = get_next_line(0);
	if (!line)
		exit(0);
	check_in(line);
	while (line)
	{
		write(1, "$> ", 3);
		free(line);
		line = get_next_line(0);
		if (!line)
			exit(0);
		check_in(line);
	}
	free(line);
}

int	main(void)
{
	char	*line;

	line = NULL;
	ft_prompt(line);
	return (0);
}
