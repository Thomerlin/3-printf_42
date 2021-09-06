# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thome <thome@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 09:28:15 by tyago-ri@st       #+#    #+#              #
#    Updated: 2021/09/06 12:33:00 by thome            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

AR= ar rc
CC= gcc
CFLAGS= -Wall -Werror -Wextra -c -g
OBJS= $(SRCS:.c=.o)

SRCS= ft_printf.c \
		ft_format.c \
		ft_more_format.c \
		ft_utils.c \
		ft_more_utils.c \

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

$(OBJS):
		$(CC) $(CFLAGS) $(SRCS)
		
clean:
		$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re