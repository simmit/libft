# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smitroi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/18 19:25:05 by smitroi           #+#    #+#              #
#    Updated: 2017/12/18 19:51:49 by smitroi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c		ft_itoa.c		ft_memmove.c	ft_putnbr_fd.c	\
	  ft_strcpy.c	ft_strlen.c		ft_strrchr.c	ft_bzero.c		\
	  ft_memalloc.c	ft_memset.c		ft_putstr.c		ft_strdel.c\
	  ft_strmap.c	ft_strsplit.c	ft_isalnum.c	ft_memccpy.c	\
	  ft_putchar.c	ft_putstr_fd.c	ft_strdup.c		ft_strncat.c	\
	  ft_strstr.c	ft_isalpha.c	ft_memchr.c		ft_putchar_fd.c	\
	  ft_strcat.c	ft_strequ.c		ft_strncmp.c	ft_strsub.c		\
	  ft_isascii.c	ft_memcmp.c		ft_putendl.c	ft_strchr.c		\
	  ft_striter.c	ft_strncpy.c	ft_strtrim.c	ft_isdigit.c	\
	  ft_memcpy.c	ft_putendl_fd.c	ft_strclr.c     ft_striteri.c	\
	  ft_strnequ.c	ft_tolower.c	ft_isprint.c	ft_memdel.c		\
	  ft_putnbr.c	ft_strcmp.c     ft_strjoin.c	ft_strnew.c		\
	  ft_toupper.c	ft_strnstr.c	ft_strmapi.c	ft_strlcat.c	\
	  ft_lstdel.c	ft_lstdelone.c	ft_lstnew.c		ft_lstadd.c		\
	  ft_lstiter.c	ft_lstmap.c 	ft_sum.c 		ft_dif.c 		\
	  ft_max.c 		ft_min.c		ft_prod.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)


fclean: clean
	/bin/rm -f $(NAME)

re: 	fclean all
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
