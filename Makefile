# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/09 13:05:51 by malnaam           #+#    #+#              #
#    Updated: 2026/09/12 14:08:20 by malnaam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_strchr.c ft_strrchr.c ft_toupper.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_calloc.c ft_atoi.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
