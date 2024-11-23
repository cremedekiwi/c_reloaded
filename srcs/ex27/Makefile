# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 13:47:26 by jarumuga          #+#    #+#              #
#    Updated: 2024/05/16 14:36:46 by jarumuga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all : $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		gcc -o $(NAME) ft_display_file.o

clean :
		/bin/rm -f ft_display_file.o

fclean: clean
		/bin/rm -f ${NAME}

re: fclean all
