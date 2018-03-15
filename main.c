/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:46:27 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/09 15:51:50 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static	int	ft_usage_fillit(int argc)
{
	if (argc > 2)
	{
		ft_usage("only 1 file -> ./fillit tetriminos_file");
		return (1);
	}
	if (argc == 1)
	{
		ft_usage("file is missing -> ./fillit tetriminos_file");
		return (1);
	}
	return (0);
}

static	int	ft_back_fillit(char **tab, int i)
{
	if (ft_test_tetri(tab) == NULL)
	{
		ft_putendl("error");
		return (1);
	}
	ft_htoa(tab);
	ft_cbak(tab, i);
	return (0);
}

static	int	ft_usageopen(int argc, char **argv, int fd)
{
	if (ft_usage_fillit(argc) == 1)
		return (1);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putendl("error");
		return (1);
	}
	return (fd);
}

int			main(int argc, char **argv)
{
	int		fd;
	char	*buff;
	int		buffs;
	int		i;
	char	**tab;

	if ((fd = ft_usageopen(argc, argv, fd)) == 1)
		return (1);
	while (read(fd, &buff, 1))
		buffs++;
	close(fd);
	if ((fd = ft_usageopen(argc, argv, fd)) == 1)
		return (1);
	if ((buff = (char*)ft_memalloc((buffs + 1) * sizeof(char *))) == NULL)
		return (1);
	buffs = read(fd, buff, buffs + 1);
	if ((buff[0] == '\0') || ((i = ft_testfile_fillit(buff, 0)) == -1))
	{
		ft_putendl("error");
		return (1);
	}
	tab = ft_intab(buff);
	close(fd);
	ft_back_fillit(tab, i);
	return (0);
}
