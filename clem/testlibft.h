#ifndef TESTLIBFT_H
# define TESTLIBFT_H

# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include<fcntl.h>
# include "libft.h"

/*
 * Printing functions
*/
void	test_ft_putchar();
void	ft_putchar_test();
void	ft_putstr_test();
void	ft_putnbr_test();
void	ft_putendl_test();
void	ft_putchar_fd_test();
void	ft_putstr_fd_test();
void	ft_putendl_fd_test();
void	ft_putnbr_fd_test();

/*
 * Libc functions
*/

void	*ft_memset_test();
void	ft_bzero_test();
void	*ft_memcpy_test();
void	*ft_memccpy_test();
void	*ft_memmove_test();
void	*ft_memchr_test();
int		ft_memcmp_test();
size_t	ft_strlen_test();
char	*ft_strdup_test();
char	*ft_strcpy_test();
char	*ft_strncpy_test();
char	*ft_strcat_test();
char	*ft_strncat_test();
size_t	ft_strlcat_test();
char	*ft_strchr_test();
char	*ft_strrchr_test();
char	*ft_strstr_test();
char	*ft_strnstr_test();
int		ft_strcmp_test();
int		ft_strncmp_test();
int		ft_atoi_test();
int		ft_isalpha_test();
int		ft_isdigit_test();
int		ft_isalnum_test();
int		ft_isascii_test();
int		ft_isprint_test();
int		ft_toupper_test();
int		ft_tolower_test();

/*
 * Second part functions
*/

void	*ft_memalloc_test();
void	ft_memdel_test();
char	*ft_strnew_test();
void	ft_strdel_test();
void	ft_strclr_test();
void	ft_striter_test();
void	ft_striteri_test();
char	*ft_strmap_test();
char	*ft_strmapi_test();
int		ft_strequ_test();
int		ft_strnequ_test;
char	*ft_strsub_test();
char	*ft_strjoin_test();
char	*ft_strtrim_test();
char	**ft_strsplit_test();
char	*ft_itoa_test();

/*
 * Extra "fait maison" Functions
*/
void		ft_press_enter();
void		ft_newline();
void		ft_printsep();
int			ft_read();

/*
void	ft_freearray(char **array, int i);
char	**ft_maketab(int len);
char	*ft_makearray(int len);
*/

#endif
