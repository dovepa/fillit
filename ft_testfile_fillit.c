/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testfile_fillit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 07:46:35 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/09 15:41:48 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_testfile_fillit(char *str, int i)
{
	int y;
	int z;
	int cpt;

	while (str[i] || (str[i] == '\n' && str[i] == ft_strlen(str)))
	{
		z = -1;
		cpt = 0;
		while (++z < 5 && str[i] != '\0')
		{
			y = -1;
			while (++y < 4 && z != 4)
			{
				if (str[i] != '.' && str[i] != '#')
					return (-1);
				cpt = (str[i++] == '#') ? cpt + 1 : cpt;
			}
			if (str[i++] != '\n')
				return (-1);
		}
		if ((str[i] == '\0' && str[i - 1] && str[i - 2] == '\n') || (cpt != 4))
			return (-1);
	}
	return (((i + 1) / 21) > 26 ? -1 : ((i + 1) / 21));
}
