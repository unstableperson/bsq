/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:33:19 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/06 13:00:11 by jmaynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_rdin(char ***map)
{
	int		ret;
	int		i;
	char	buf;

	while (ret = read(0, buf, 1) > 0)
	{
		
	}
}

int		main(int argc, char **argv)
{
	char	**map;

	if (argc == 1)
	{
		map = ft_stdin();
	}
	if (ft_rdfl(argc, argv, &map) == 0)
		return (0);
	
	return (0);
}