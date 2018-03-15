/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbak.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 07:51:58 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/09 15:44:37 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static	int	ft_back(char **t, char **k, int i)
{
	int		x;
	int		y;

	y = -1;
	if (!t[i])
		return (1);
	while (++y < ft_size(k))
	{
		x = -1;
		while (++x < ft_size(k))
		{
			if (ft_verif_tetris(t[i], k, y, x) == 1)
			{
				k = ft_add(t[i], k, y, x);
				if (ft_back(t, k, i + 1) == 1)
					return (1);
				else
					k = ft_rm(t[i], k);
			}
		}
	}
	return (0);
}

void		ft_cbak(char **t, int i)
{
	char	**k;
	int		cote;

	cote = ft_sqs(i);
	k = ft_newk(cote);
	while (ft_back(t, k, 0) == 0)
	{
		cote++;
		ft_freek(k);
		k = ft_newk(cote);
	}
	ft_printk(k);
	return ;
}
