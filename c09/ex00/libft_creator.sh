# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 19:15:59 by fgirault          #+#    #+#              #
#    Updated: 2026/09/29 19:22:57 by fgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c -o libft.o && ar rcs libft.a libft.o
