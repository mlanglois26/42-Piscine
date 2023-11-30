# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malanglo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 13:45:08 by malanglo          #+#    #+#              #
#    Updated: 2023/09/27 23:12:05 by malanglo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strcmp.c ft_strlen.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.o
