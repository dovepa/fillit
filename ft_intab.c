/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:57:42 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/09 15:46:00 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static	char	**ft_malloc_intab(char **tab, char *str)
{
	int i;
	int c;

	i = ft_testfile_fillit(str, 0);
	if ((tab = (char **)ft_memalloc((i + 1) * sizeof(char **))) == NULL)
		return (NULL);
	c = -1;
	while (++c < i)
		if ((tab[c] = (char *)ft_memalloc((16 + 1) * sizeof(char *))) == NULL)
			return (NULL);
	return (tab);
}

char			**ft_intab(char *str)
{
	int		c;
	int		lines;
	int		car;
	char	**tab;

	if ((tab = ft_malloc_intab(tab, str)) == NULL)
		return (NULL);
	c = -1;
	car = 0;
	lines = 0;
	while (str[++c])
	{
		while (str[c] != '\n')
			tab[lines][car++] = str[c++];
		if (str[c] == '\n' && str[c + 1] == '\n' && lines++ > -1)
		{
			car = 0;
			c++;
		}
	}
	return (tab);
}
