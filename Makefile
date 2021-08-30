NAME= libftprintf.a

AR= ar rc
CC= gcc
CFLAGS= -Wall -Werror -Wextra -c
OBJS= $(SRCS:.c=.o)

SRCS= ft_printf.c \
		ft_category.c \
		ft_more_category.c \
		ft_putcollection.c \
		ft_putcollection2.c \

all: $(NAME)
		@echo "\033[1;32mmake done!"

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

$(OBJS):
		$(CC) $(CFLAGS) $(SRCS)
		
clean:
		$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)
				clear
				@echo "\033[1;34mmake fclean done!"
	
re: fclean all

.PHONY: all clean fclean re