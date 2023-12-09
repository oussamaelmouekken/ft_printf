NAME = libftprintf.a
AR = ar rc
CC = cc


CFILES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_putstr.c 
OBJ = ${CFILES:.c=.o} 
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(CFILES)
	$(CC) $(FLAG) -c $(CFILES)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re 