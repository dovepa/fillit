/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_rm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:37:29 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/06 20:57:00 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

char	**ft_rm(char *t, char **k)
{
	int	i;
	int	j;

	while (*t == '.')
		t = t + 1;
	j = 0;
	i = -1;
	while (k[++i])
	{
		j = -1;
		while (k[i][++j])
			if (k[i][j] == *t)
				k[i][j] = '.';
	}
	return (k);
}

char	**ft_add(char *t, char **k, int ligne, int colonne)
{
	int	i;

	i = -1;
	while (t[++i])
	{
		if (t[i] != '.')
			k[ligne + i / 4][colonne + i % 4] = t[i];
	}
	return (k);
}
