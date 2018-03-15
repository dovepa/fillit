/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allpos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:56:55 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/05 14:49:52 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

char	**ft_allpos(char **pos)
{
	ft_strcpy(pos[0], "###...#");
	ft_strcpy(pos[1], ".#...#..##");
	ft_strcpy(pos[2], "#...###");
	ft_strcpy(pos[3], "##..#...#");
	ft_strcpy(pos[4], "###.#");
	ft_strcpy(pos[5], "##...#...#");
	ft_strcpy(pos[6], "..#.###");
	ft_strcpy(pos[7], "#...#...##");
	ft_strcpy(pos[8], "###..#");
	ft_strcpy(pos[9], ".#..##...#");
	ft_strcpy(pos[10], ".#..###");
	ft_strcpy(pos[11], "#...##..#");
	ft_strcpy(pos[12], ".##.##");
	ft_strcpy(pos[13], "#...##...#");
	ft_strcpy(pos[14], "##...##");
	ft_strcpy(pos[15], ".#..##..#");
	ft_strcpy(pos[16], "####");
	ft_strcpy(pos[17], "#...#...#...#");
	ft_strcpy(pos[18], "##..##");
	return (pos);
}
