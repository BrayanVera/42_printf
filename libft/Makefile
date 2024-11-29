NAME = libft.a
LIB = ar -rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_character.c ft_string.c ft_memory.c ft_memory_two.c ft_string_manipulation.c ft_conversion.c ft_memory_management.c ft_string_creation.c ft_string_creation_split.c ft_string_transformation.c ft_io_functions.c
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