#include"testlibft.h"

void	memccpy()
{
	char s1[30];
	char s3[30];
	char s2[30] = "une chipo ! Aux epices";

	memccpy(s1, s2, '!', 15)
	ft_memccpy(s3, s2, '!', 15));
	printf("%s memccpy = %s ft_memccpy = %s\n", s2, s1, s3)
	return(0);
}
void	ft_memccpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCCPY_TEST");
	memccpy_test();
	ft_newline();
	ft_prinstep(15);
}
