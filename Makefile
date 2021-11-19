#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 08:08:13 by briffard          #+#    #+#              #
#    Updated: 2021/11/18 16:22:21 by briffard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
TEST=libtest.a

TESTFILE=	ft_putchar_test.c		ft_newline_test.c		ft_separation_test.c	\
			ft_putchar_fd_test.c	ft_putstr_test.c		ft_putstr_fd_test.c		\
			ft_putendl_test.c		ft_putendl_fd_test.c	ft_putnbr_test.c		\
			ft_putnbr_fd_test.c		ft_strlen_test.c		ft_fgets.c				\
			ft_tolower_test.c		ft_toupper_test.c		ft_atoi_test.c			\
			ft_isalpha_test.c		ft_itoa_test.c

FILES=	ft_putchar.c	ft_putchar_fd.c		ft_putendl.c		ft_tolower.c		\
		ft_putendl_fd.c	ft_putnbr.c			ft_putnbr_fd.c		ft_toupper.c		\
		ft_putstr.c		ft_putstr_fd.c		ft_strlen.c			ft_atoi.c			\
		ft_isalpha.c	ft_itoa.c

OBJ=$(SRC:.c=.o)

INCL=libft.h

RM=rm -f

CC=gcc
CCFLAGS=-Werror -Wall -Wextra

all: $(NAME) $(TEST)

$(NAME):
	@echo "Compiling..."
	$(CC) $(CCFLAGS) -c $(FILES)
	@echo "Creation of libft.h"
	ar rc $(NAME) *.o
	@echo "Libft.h created."
	ranlib $(NAME)

$(TEST):
	@echo "Compiling ..."
	$(CC) $(CCFLAGS) -c $(TESTFILE)
	@echo "Creation of testlibft.h"
	ar rc $(TEST) *test.o
	@echo "Testlibft has been created"
	ranlib $(TEST)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all
