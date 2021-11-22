#include"testlibft.h"

void	strncmp_test()
{
	char s1[50] = "une wiche lorraine";
	char s2[50] = "une wiche lorraine";

	printf("%s, strncmp = %d ft_strncmp = %d\n", s2, strncmp(s1, s2, 10), ft_strncmp(s1, s2, 10));
	return (0);
}

void	ft_strncmp_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCMP_TEST");
	strncmp_test();
	ft_newline();
	ft_printsep(15);
}
