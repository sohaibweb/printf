CC = cc

NAME = ft_printf.a

SRCS = ft_print_char.c \
		ft_print_nbr.c \
		ft_print_str.c \
		ft_print_unsigned.c \
		ft_numlen.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -rfv $(OBJS)

fclean :
	rm -rfv  $(NAME)

re : fclean all

.PHONY : all clean fclean re
