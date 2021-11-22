#include"testlibft.h"

void	strchr_test()
{
	char s1[50] = "Mais a la vie, je dit oui";

	printf("%s, strchr = %s ft_strchr = %s\n", s2, strchr(s1, "oui"), ft_strchr(s1, "oui"));
	return (0);
}

void	ft_strchr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCHR_TEST");
	strchr_test();
	ft_newline();
	ft_printsep(15);
}
