# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 16:30:49 by dpalombo          #+#    #+#              #
#    Updated: 2017/12/09 16:02:22 by dpalombo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCLIB= libft
SRC= 	main.c ft_testfile_fillit.c ft_allpos.c ft_intab.c ft_test_tetri.c ft_htoa.c ft_k.c \
		ft_add_rm.c	ft_verif_tetris.c	ft_size.c	ft_cbak.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) -c $? -o $@

$(NAME): $(OBJ)
	@$(MAKE) -C $(SRCLIB)
	@$(CC) $(OBJ) libft/libft.a -o $(NAME)
	@echo "ok prog"

clean:
	@$(MAKE) clean -C $(SRCLIB)
	@/bin/rm -f $(OBJ)
	@echo "supp obj ok"

fclean: clean
	@$(MAKE) fclean -C $(SRCLIB)
	@/bin/rm -f $(NAME)
	@echo "sup + prog ok"

re: fclean all

.PHONY = all clean fclean re