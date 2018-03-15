/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_tetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:09:52 by pirousse          #+#    #+#             */
/*   Updated: 2017/12/07 14:45:48 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_verif_tetris(char *tetri, char **square, int i, int j)
{
	int pos;

	pos = 0;
	while (tetri[pos])
	{
		if (tetri[pos] != '.')
		{
			if ((i + pos / 4 >= ft_size(square)) || \
			(j + pos % 4 >= ft_size(square)))
				return (0);
			if (square[i + pos / 4][j + pos % 4] != '.')
				return (0);
		}
		pos++;
	}
	return (1);
}
