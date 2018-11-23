# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maheiden <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 15:44:29 by maheiden          #+#    #+#              #
#    Updated: 2018/11/23 18:42:25 by maheiden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_bzero.c \
	   ft_memcpy.c \
	   ft_memchr.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
		gcc -c $(FLAG) $(SRC) -I.
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
