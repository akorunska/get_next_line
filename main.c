/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorunsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:41:19 by akorunsk          #+#    #+#             */
/*   Updated: 2017/11/27 18:24:57 by akorunsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	int		r;
	char	*res;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		res = NULL;
		r = 1;
		while (r > 0)
		{
			r = get_next_line(fd, &res);
			printf("%d %s\n", r, res);
			free(res);
		}
	}
	return (0);
}
