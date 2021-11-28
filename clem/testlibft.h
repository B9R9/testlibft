#ifndef TESTLIBFT_H
# define TESTLIBFT_H

# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include<fcntl.h>
# include "libft.h"

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
/*
 * Printing functions
*/
void	test_ft_putchar();
void	ft_putchar_test(char c);
void	ft_putstr_test(char const *s);
void	ft_putnbr_test(int n);
void	ft_putendl_test(char const *s);
void	ft_putchar_fd_test(char c, int fd);
void	ft_putstr_fd_test(char const *s, int fd);
void	ft_putendl_fd_test(char const *s, int fd);
void	ft_putnbr_fd_test(int n, int fd);

/*
 * Libc functions
*/

void	*ft_memset_test(void *str, int c, size_t n);
void	ft_bzero_test(void *s, size_t n);
void	*ft_memcpy_test(void *dest, const void *src, size_t n);
void	*ft_memccpy_test(void *dest, const void *src, int c, size_t n);
void	*ft_memmove_test(void *dest, const void *src, size_t n);
void	*ft_memchr_test(void *buf, int ch, size_t length);
int		ft_memcmp_test(const void *s1, const void *s2, size_t n);
size_t	ft_strlen_test(const char *str);
char	*ft_strdup_test(const char *string);
char	*ft_strcpy_test(char *dest, const char *src);
char	*ft_strncpy_test(char *dest, const char *src, unsigned int n);
char	*ft_strcat_test(char *dest, const char *src);
char	*ft_strncat_test(char *dest, const char *src, size_t n);
size_t	ft_strlcat_test(char *dest, const char *src, size_t size);
char	*ft_strchr_test(const char *str, int c);
char	*ft_strrchr_test(const char *str, int c);
char	*ft_strstr_test(const char *haystack, const char *needle);
char	*ft_strnstr_test(const char *haystack, const char *needle, size_t len);
int		ft_strcmp_test(const char *str1, const char *str2);
int		ft_strncmp_test(const char *str1, const char *str2, size_t n);
int		ft_atoi_test(const char *str);
int		ft_isalpha_test(int c);
int		ft_isdigit_test(int c);
int		ft_isalnum_test(int c);
int		ft_isascii_test(int c);
int		ft_isprint_test(int c);
int		ft_toupper_test(int c);
int		ft_tolower_test(int c);

/*
 * Second part functions
*/

void	*ft_memalloc_test(size_t size);
void	ft_memdel_test(void **ap);
char	*ft_strnew_test(size_t size);
void	ft_strdel_test(char **as);
void	ft_strclr_test(char *s);
void	ft_striter_test(char *s, void (*f)(char *));
void	ft_striteri_test(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap_test(char const *s, char (*f)(char));
char	*ft_strmapi_test(char const *s, char(*f)(unsigned int, char));
int		ft_strequ_test(char const *s1, char const *s2);
int		ft_strnequ_test(char const *s1, char const *s2, size_t n);
char	*ft_strsub_test(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_test(char const *s1, char const *s2);
char	*ft_strtrim_test(char const *s);
char	**ft_strsplit_test(char const *s, char c);
char	*ft_itoa_test(int n);

/*
 * Extra "fait maison" Functions
*/
void		ft_press_enter();
void		ft_newline();
void		ft_printsep(int	c);
int			ft_read(char *str, int lenght);

/*
void	ft_freearray(char **array, int i);
char	**ft_maketab(int len);
char	*ft_makearray(int len);
*/

#endif
