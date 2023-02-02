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

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = myprogram
SOURCES = main.c helper.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
      $(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
      $(CC) $(CFLAGS) -c $< -o $@

clean:
      rm -f $(OBJECTS)

fclean: clean
      rm -f $(NAME)

re: fclean all

bonus:
      $(CC) $(CFLAGS) bonus.c -o bonus

.PHONY: all clean fclean re bonus

