# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 11:25:59 by thgiraud          #+#    #+#              #
#    Updated: 2016/11/18 15:27:29 by thgiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCFLAGS = gcc -Wall -Wextra -Werror

INC = ./libft.h

SRCS = ./ft_atoi.c ./ft_memccpy.c ./ft_strcat.c ./ft_strncpy.c ./ft_bzero.c \
	   ./ft_memchr.c ./ft_strchr.c ./ft_strnequ.c ./ft_foreach.c \
	   ./ft_memcmp.c ./ft_strclr.c ./ft_strnew.c ./ft_is_negative.c \
	   ./ft_memcpy.c ./ft_strcmp.c ./ft_strnstr.c ./ft_isalnum.c \
	   ./ft_memcpy_rev.c ./ft_strcpy.c ./ft_strrchr.c ./ft_isalpha.c \
	   ./ft_memdel.c ./ft_strdel.c ./ft_strrev.c ./ft_isascii.c \
	   ./ft_memmove.c ./ft_strdup.c ./ft_strsplit.c ./ft_isdigit.c \
	   ./ft_memset.c ./ft_strequ.c ./ft_strstr.c ./ft_isprint.c \
	   ./ft_putchar.c ./ft_striter.c ./ft_strsub.c ./ft_itoa.c \
	   ./ft_putchar_fd.c ./ft_striteri.c ./ft_strtrim.c ./ft_lstadd.c \
	   ./ft_putendl.c ./ft_strjoin.c ./ft_swap.c ./ft_lstdel.c \
	   ./ft_putendl_fd.c ./ft_strlcat.c ./ft_tolower.c ./ft_lstdelone.c	\
	   ./ft_putnbr.c ./ft_strlen.c ./ft_toupper.c ./ft_lstiter.c \
	   ./ft_putnbr_fd.c ./ft_strmap.c ft_lstmap.c ./ft_putstr.c \
	   ./ft_strmapi.c ./ft_lstnew.c ./ft_putstr_fd.c ./ft_strncat.c \
	   ./ft_memalloc.c ./ft_range.c ./ft_strncmp.c

OBJS = ./ft_atoi.o ./ft_memccpy.o ./ft_strcat.o ./ft_strncpy.o ./ft_bzero.o \
	   ./ft_memchr.o ./ft_strchr.o ./ft_strnequ.o ./ft_foreach.o \
	   ./ft_memcmp.o ./ft_strclr.o ./ft_strnew.o ./ft_is_negative.o \
	   ./ft_memcpy.o ./ft_strcmp.o ./ft_strnstr.o ./ft_isalnum.o \
	   ./ft_memcpy_rev.o ./ft_strcpy.o ./ft_strrchr.o ./ft_isalpha.o \
	   ./ft_memdel.o ./ft_strdel.o ./ft_strrev.o ./ft_isascii.o \
	   ./ft_memmove.o ./ft_strdup.o ./ft_strsplit.o ./ft_isdigit.o \
	   ./ft_memset.o ./ft_strequ.o ./ft_strstr.o ./ft_isprint.o \
	   ./ft_putchar.o ./ft_striter.o ./ft_strsub.o ./ft_itoa.o \
	   ./ft_putchar_fd.o ./ft_striteri.o ./ft_strtrim.o ./ft_lstadd.o \
	   ./ft_putendl.o ./ft_strjoin.o ./ft_swap.o ./ft_lstdel.o \
	   ./ft_putendl_fd.o ./ft_strlcat.o ./ft_tolower.o ./ft_lstdelone.o	\
	   ./ft_putnbr.o ./ft_strlen.o ./ft_toupper.o ./ft_lstiter.o \
	   ./ft_putnbr_fd.o ./ft_strmap.o ft_lstmap.o ./ft_putstr.o \
	   ./ft_strmapi.o ./ft_lstnew.o ./ft_putstr_fd.o ./ft_strncat.o \
	   ./ft_memalloc.o ./ft_range.o ./ft_strncmp.o

OBJ = $(SCRS:.c=.o)

all: $(NAME)

$(NAME):
			$(GCFLAGS) -c -I $(INC) $(SRCS)
			ar rc $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
