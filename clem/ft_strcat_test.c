#include"testlibft.h"

void	strcat_test()
{
	char s1[25] = "Merguez";
	char s2[25] = "couscous";
	char s3[25] = "Merguez";

	printf("%s, strcat = %s ft_strcat = %s\n", s2, strcat(s2, s1), ft_strcat(s2, s3));
	return (0);
}
void	ft_strcat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCAT_TEST");
	strcat_test();
	ft_newline();
	ft_printsep(15);
}
