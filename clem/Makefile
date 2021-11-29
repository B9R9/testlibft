#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 08:08:13 by briffard          #+#    #+#              #
#    Updated: 2021/11/29 19:55:53 by ccariou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
TEST=libtest.a
SRC = ./srcs/
TSRC= ./test/

TESTFILES=	$(TSRC)ft_putchar_test.c		$(TSRC)ft_newline_test.c		$(TSRC)ft_separation_test.c	\
			$(TSRC)ft_putchar_fd_test.c		$(TSRC)ft_putstr_test.c			$(TSRC)ft_putstr_fd_test.c	\
			$(TSRC)ft_putendl_test.c		$(TSRC)ft_putendl_fd_test.c									\
			$(TSRC)ft_putnbr_test.c			$(TSRC)ft_putnbr_fd_test.c		$(TSRC)ft_strlen_test.c		\
			$(TSRC)ft_fgets_test.c			$(TSRC)ft_tolower_test.c		$(TSRC)ft_toupper_test.c	\
			$(TSRC)ft_atoi_test.c			$(TSRC)ft_isalpha_test.c		$(TSRC)ft_itoa_test.c		\
			$(TSRC)ft_press_enter_test.c	$(TSRC)ft_strjoin_test.c		$(TSRC)ft_bzero_test.c		\
			$(TSRC)ft_isalnum_test.c		$(TSRC)ft_isascii_test.c		$(TSRC)ft_isdigit_test.c	\
			$(TSRC)ft_isprint_test.c		$(TSRC)ft_memccpy_test.c		$(TSRC)ft_memcpy_test.c		\
			$(TSRC)ft_memset_test.c			$(TSRC)ft_strcat_test.c			$(TSRC)ft_strchr_test.c		\
			$(TSRC)ft_strcmp_test.c			$(TSRC)ft_strcpy_test.c			$(TSRC)ft_strdup_test.c		\
			$(TSRC)ft_strlcat_test.c		$(TSRC)ft_strncat_test.c		$(TSRC)ft_strncmp_test.c	\
			$(TSRC)ft_strncpy_test.c		$(TSRC)ft_strnstr_test.c		$(TSRC)ft_strrchr_test.c	\
			$(TSRC)ft_strstr_test.c			$(TSRC)ft_strequ_test.c			$(TSRC)ft_strnequ_test.c	\
			$(TSRC)ft_strtrim_test.c		$(TSRC)ft_strclr_test.c			$(TSRC)ft_strdel_test.c		\
			$(TSRC)ft_strnew_test.c			$(TSRC)ft_strsub_test.c			$(TSRC)ft_striter_test.c	\
			$(TSRC)ft_striteri_test.c		$(TSRC)ft_memalloc_test.c		$(TSRC)ft_memchr_test.c		\
			$(TSRC)ft_memcmp_test.c			$(TSRC)ft_memdel_test.c			$(TSRC)ft_memmove_test.c 	\
			$(TSRC)ft_strmapi_test.c		$(TSRC)ft_strmap_test.c			$(TSRC)ft_strsplit_test.c	\


FILES=		$(SRC)ft_putchar.c				$(SRC)ft_putchar_fd.c			$(SRC)ft_putendl.c			\
			$(SRC)ft_tolower.c				$(SRC)ft_putendl_fd.c			$(SRC)ft_putnbr.c			\
			$(SRC)ft_putnbr_fd.c			$(SRC)ft_toupper.c				$(SRC)ft_putstr.c			\
			$(SRC)ft_putstr_fd.c			$(SRC)ft_strlen.c				$(SRC)ft_atoi.c				\
			$(SRC)ft_isalpha.c				$(SRC)ft_itoa.c					$(SRC)ft_strjoin.c			\
			$(SRC)ft_bzero.c				$(SRC)ft_isalnum.c				$(SRC)ft_isascii.c			\
			$(SRC)ft_isdigit.c				$(SRC)ft_isprint.c				$(SRC)ft_memccpy.c			\
			$(SRC)ft_strnew.c				$(SRC)ft_memcpy.c				$(SRC)ft_memset.c			\
			$(SRC)ft_strcat.c				$(SRC)ft_strchr.c				$(SRC)ft_strcmp.c			\
			$(SRC)ft_strcpy.c				$(SRC)ft_strdup.c				$(SRC)ft_strlcat.c			\
			$(SRC)ft_strncat.c				$(SRC)ft_strncmp.c				$(SRC)ft_strncpy.c			\
			$(SRC)ft_strnstr.c				$(SRC)ft_strrchr.c				$(SRC)ft_strstr.c			\
			$(SRC)ft_strequ.c				$(SRC)ft_strnequ.c				$(SRC)ft_strtrim.c			\
			$(SRC)ft_strclr.c				$(SRC)ft_strdel.c											\
			$(SRC)ft_strsub.c				$(SRC)ft_striter.c				$(SRC)ft_striteri.c			\
			$(SRC)ft_memalloc.c				$(SRC)ft_memchr.c				$(SRC)ft_memcmp.c			\
			$(SRC)ft_memdel.c				$(SRC)ft_memmove.c				$(SRC)ft_strmapi.c			\
			$(SRC)ft_strmap.c				$(SRC)ft_strsplit.c											\

OBJ=$(SRC:.c=.o)

INCL=./srcs/libft.h

RM=rm -f

CC=gcc
CCFLAGS=-Werror -Wall -Wextra

all: $(NAME) $(TEST)

$(NAME):
	@echo "Compiling..."
	$(CC) $(CCFLAGS) -c $(FILES)
	@echo "Creation of libft.a"
	ar rc $(NAME) *.o
	@echo "Libft.h created."
	ranlib $(NAME)
	cp ./srcs/libft.h ./libft.h
	cp ./srcs/libft.h ./test/libft.h

$(TEST):
	@echo "Compiling ..."
	$(CC) $(CCFLAGS) -c $(TESTFILES) -I$(INCL)
	@echo "Creation of testlibft.a"
	ar rc $(TEST) *test.o
	@echo "Testlibft has been created"
	ranlib $(TEST)
	cp ./test/testlibft.h ./testlibft.h
	$(RM) *.o

run: all
	$(CC) $(CCFLAGS) -L. -lft -ltest testlibft.c -o whatthefuck!
	clear
	./whatthefuck!


clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) $(TEST) a.out whatthefuck!
	$(RM) ./test/libft.h ./testlibft.h ./libft.h

re: fclean all
