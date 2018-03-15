/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 21:09:47 by pirousse          #+#    #+#             */
/*   Updated: 2017/12/06 21:37:56 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_size(char **square)
{
	int	size;

	size = 0;
	while (square[size])
		size++;
	return (size);
}

int	ft_sqs(int i)
{
	int cpt;

	cpt = 2;
	i *= 4;
	while ((cpt * cpt) < i)
		cpt += 1;
	return (cpt);
}
