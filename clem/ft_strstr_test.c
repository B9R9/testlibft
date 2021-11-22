#include"testlibft.h"

void	strstr_test()
{
	char s1[50] = "petit pique-nique";

	printf("%s, strstr = %s ft_strstr = %s\n", s2, strstr(s1, "pique"), ft_strstr(s1, "pique"));
	return (0);
}

void	ft_strstr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRSTR_TEST");
	strstr_test();
	ft_newline();
	ft_printsep(15);
}
