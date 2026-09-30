# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/30 14:22:11 by fgirault          #+#    #+#              #
#    Updated: 2026/09/30 18:44:12 by fgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = -I includes
FLAGS = -c -Wall -Wextra -Werror
OBJ = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

all : $(NAME)

srcs/ft_putchar.o : srcs/ft_putchar.c
	cc $(HEADER) $(FLAGS) srcs/ft_putchar.c -o srcs/ft_putchar.o

srcs/ft_swap.o : srcs/ft_swap.c
	cc $(HEADER) $(FLAGS) srcs/ft_swap.c -o srcs/ft_swap.o

srcs/ft_putstr.o : srcs/ft_putstr.c
	cc $(HEADER) $(FLAGS) srcs/ft_putstr.c -o srcs/ft_putstr.o

srcs/ft_strlen.o : srcs/ft_strlen.c
	cc $(HEADER) $(FLAGS) srcs/ft_strlen.c -o srcs/ft_strlen.o

srcs/ft_strcmp.o : srcs/ft_strcmp.c
	cc $(HEADER) $(FLAGS) srcs/ft_strcmp.c -o srcs/ft_strcmp.o

$(NAME) : $(OBJ)
	ar rcs libft.a $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY : all clean fclean re
