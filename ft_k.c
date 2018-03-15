/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:50:13 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/08 08:20:57 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

char	**ft_newk(int l)
{
	char	**k;
	int		i;
	int		j;

	i = -1;
	if ((k = (char **)ft_memalloc((l + 1) * sizeof(char **))) == NULL)
		return (NULL);
	while (++i < l)
		if ((k[i] = (char *)ft_memalloc((l + 1) * sizeof(char *))) == NULL)
			return (NULL);
	i = -1;
	while (++i < l)
	{
		j = -1;
		while (++j < l)
			k[i][j] = '.';
	}
	return (k);
}

void	ft_freek(char **k)
{
	int i;

	i = 0;
	while (k[i])
	{
		free(k[i]);
		i++;
	}
	return ;
}

void	ft_printk(char **k)
{
	int i;

	i = 0;
	while (k[i])
	{
		ft_putendl(k[i]);
		i++;
	}
	return ;
}
