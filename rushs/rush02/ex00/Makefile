NAME = rush-02
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = main.c basic_functions.c parsing_functions.c dictionary_manip.c error_management.c
OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
