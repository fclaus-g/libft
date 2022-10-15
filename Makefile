# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: n2 <n2@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 12:23:55 by n2                #+#    #+#              #
#    Updated: 2022/10/13 14:01:14 by n2               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c main.c
CC = gcc
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra
OBJ = *.o
RM = rm -fr
OPTION = -c

all : $(NAME)

$(NAME) : $(OBJ)
	$(LIB) $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

%.o : %.c
	$(CC) -c $(FLAGS) $< -o $@

clean :
	$(RM) $(OBJ)
fclean :
	$(RM) $(NAME)
re: fclean all
.PHONY : all clean fclean re