# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyuuki <cyuuki@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 17:47:25 by cyuuki            #+#    #+#              #
#    Updated: 2020/11/16 18:01:06 by cyuuki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wextra -Werror -Wall -c
HEADER = libft.h
OBJS = $(FUNCS:.c=.o)
FUNCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_strmapi.c ft_strtrim.c ft_split.c ft_putnbr_fd.c

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(FUNCS) libft.h
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY:	clean	fclean	all	re
