/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:31:43 by dpalombo          #+#    #+#             */
/*   Updated: 2017/12/09 15:50:51 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFILLIT_H
# define LIBFILLIT_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	**ft_add(char *t, char **k, int ligne, int colonne);
char	**ft_rm(char *t, char **k);
char	**ft_allpos(char **pos);
void	ft_cbak(char **t, int i);
void	ft_htoa(char **tab);
char	**ft_intab(char *str);
char	**ft_newk(int l);
void	ft_freek(char **k);
void	ft_printk(char **k);
int		ft_size(char **square);
int		ft_sqs(int i);
char	**ft_test_tetri(char **foin);
int		ft_testfile_fillit(char *str, int i);
int		ft_verif_tetris(char *tetri, char **square, int i, int j);
#endif
