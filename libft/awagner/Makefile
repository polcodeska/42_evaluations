# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awagner <awagner@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 18:06:37 by awagner           #+#    #+#              #
#    Updated: 2022/01/21 18:16:39 by h                ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
OBJ		= *.o
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:
	$(CC) *.c -c $(CFLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
