/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:36:17 by pirousse          #+#    #+#             */
/*   Updated: 2017/12/09 15:47:36 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static	int		ft_test_g(char **foin, char **ai, int i, int y)
{
	free(foin[i]);
	foin[i] = ft_strdup(ai[y]);
	return (1);
}

static	char	**ft_malloc_tetri(char **ai)
{
	int i;

	i = -1;
	if ((ai = (char**)ft_memalloc(sizeof(char *) * 20)) == NULL)
		return (NULL);
	while (++i < 20)
	{
		if ((ai[i] = (char*)ft_memalloc(sizeof(char *) * (14))) == NULL)
			return (NULL);
	}
	return (ai);
}

char			**ft_test_tetri(char **foin)
{
	int		i;
	int		y;
	int		test;
	char	**ai;

	if ((ai = ft_malloc_tetri(ai)) == NULL)
		return (NULL);
	ai = ft_allpos(ai);
	i = 0;
	while (foin[i] != '\0')
	{
		y = -1;
		test = 0;
		while (ai[++y])
		{
			if (ft_strstr(foin[i], ai[y]) && y != 19)
				test = ft_test_g(foin, ai, i, y);
		}
		if (test == 0)
			return (NULL);
		i++;
	}
	return (foin);
}
