CC = cc

NAME = libftprintf.a

SRCS = 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(NAME)
%.o : %.c
	$(CC) -Wall -Wextra -Werror -c #< -o $@
clean :
	rm -rfv $(OBJS)
fclean :
	rm -rfv  $(NAME)
re : fclen all

.PHONY : all clean fclean re
