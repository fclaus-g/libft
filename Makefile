# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fclaus-g <fclaus-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 10:58:45 by fclaus-g          #+#    #+#              #
#    Updated: 2022/10/14 19:07:58 by fclaus-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =  \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c \
	ft_toupper.c main.c ft_strlcpy.c ft_strlen.c ft_isalnum.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

CC = gcc
LIB = ar -crs
CFLAGS = -Wall -Werror -Wextra
OBJ = *.o
RM = rm -f
OPTION = -c 

all : $(NAME)

$(NAME) : $(OBJ) 
	$(LIB) $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) $(OPTION) $(SRC)
	
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@


clean : 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
