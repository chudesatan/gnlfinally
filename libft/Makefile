# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/05 16:02:13 by fcorrupt          #+#    #+#              #
#    Updated: 2019/01/21 14:44:49 by fcorrupt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

OBJ  = *.o

all: $(NAME)

$(NAME):
	    gcc -Wall -Wextra -Werror -c $(SRC) libft.h
		    ar rc $(NAME) $(OBJ)
clean:
	    rm -f *.o

fclean: clean
	    rm -f $(NAME)

re: fclean all
