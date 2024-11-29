NAME = libftprintf.a

LIB = ar -rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(addprefix src/, ft_printf_one.c) ft_printf.c
RM = rm -f
OBJ = $(SRC:.c=.o)


$(NAME): $(OBJ) 
	$(LIB) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re