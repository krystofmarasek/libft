# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 12:27:10 by kmarasek          #+#    #+#              #
#    Updated: 2023/01/21 12:27:13 by kmarasek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= $(wildcard ft*.c)
OBJ	= $(SRC:.c=.o)
CC	= gcc
RM 	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.
NAME	= libft.a
all:	$(NAME)
$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)
	
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re:	fclean $(NAME)
bonus:	$(OBJ)
	ar rcs $(NAME) $(OBJ)	
so:
	$(cc) -nostarfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)


