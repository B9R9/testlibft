#ifndef TESTLIBFT_H
# define TESTLIBFT_H

# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include<fcntl.h>
# include "libft.h"

void		test_ft_putchar();
void		ft_newline();
void		ft_printsep(int	c);
void		ft_putchar_fd_test();
void		ft_putstr_test();
void		ft_putstr_fd_test();
void		ft_putendl_test();
void		ft_putendl_fd_test();
void		ft_putnbr_test();
void		ft_putnbr_fd_test();
void		ft_strlen_test();
int			ft_read(char *str, int lenght);
void		ft_tolower_test();
void		ft_toupper_test();
void		ft_itoa_test();
void		ft_isalpha_test();

#endif
