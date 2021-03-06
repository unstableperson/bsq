/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:52:54 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/07 21:42:32 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_map(int ***map, char *argv, int i)
{
	int		fd;
	char	sym;

	sym = '0';
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		ft_error(1);
	fd = ft_param(fd);
	g_wid = 0;
	while (sym != '\n')
	{
		read(fd, &sym, 1);
		g_wid++;
	}
	i = g_len;
	if ((*map = (int **)malloc(i-- * sizeof(int *))) == NULL)
		ft_error(4);
	while (i >= 0)
	{
		(*map)[i--] = (int *)malloc(g_wid * sizeof(int));
		if (!(*map))
			ft_error(4);
	}
	if (close(fd) < 0)
		ft_error(2);
}
