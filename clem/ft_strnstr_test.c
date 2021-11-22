#include"testlibft.h"

void	strnstr_test()
{
	char s1[50] = "petit pique-nique";

	printf("%s, strstr = %s ft_strstr = %s\n", s2, strstr(s1, "pique"), ft_strstr(s1, "pique"));
	return (0);
}

void	ft_strnstr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNSTR_TEST");
	strnstr_test();
	ft_newline();
	ft_printsep(15);
}
