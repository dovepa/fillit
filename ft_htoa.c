/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:34:09 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/06 21:00:16 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_htoa(char **tab)
{
	int		x;
	int		i;
	char	a;

	x = 0;
	i = 0;
	a = 'A';
	while (tab[x])
	{
		while (tab[x][i])
		{
			if (tab[x][i] == '#')
				tab[x][i] = a;
			i++;
		}
		a = a + 1;
		x++;
		i = 0;
	}
	return ;
}
