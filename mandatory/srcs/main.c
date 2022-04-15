/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:57:36 by yelgharo          #+#    #+#             */
/*   Updated: 2022/04/15 13:59:21 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_prompt(char *line)
{
	write(1, "$> ", 3);
	line = get_next_line(0);
	if (!line)
		perror("somthing went rong !!");
	while (line)
	{
		write(1, "$> ", 3);
		free(line);
		line = get_next_line(0);
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
