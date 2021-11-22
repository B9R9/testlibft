#include"testlibft.h"

void	isdigit()
{
	char c = '9';

	int a = c;
	printf("%c isdigit = %d ft_isdigit = %d\n", c, isdigit(a), ft_isdigit(a));
	return (0);
}

void	ft_isdigit_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISDIGIT_TEST");
	isdigit_test();
	ft_newline();
	ft_printsep(15);
}
