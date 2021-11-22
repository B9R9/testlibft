#include"testlibft.h"

void	strcmp_test()
{
	char s1[50] = "ca vous dirait une ice cream avec mon ami et moi ?";
	char s2[50] = "ca vous dirait une ice cream avec mon ami et moi ?";

	printf("%s, strcmp = %d ft_strcmp = %d\n", s2, strcmp(s1, s2), ft_strcmp(s1, s2));
	return (0);
}

void	ft_strcmp_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCMP_TEST");
	strcmp_test();
	ft_newline();
	ft_printsep(15);
}
