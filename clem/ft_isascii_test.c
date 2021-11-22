#include"testlibft.h"

void 	isascii_test()
{
	char c = '!';

	int a = c;
	printf("%c isascii = %d        ft_isascii = %d\n", c, isascii(a), ft_isascii(a));
	return (0);
}


void	ft_isascii_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISASCII_TEST");
	isascii_test();
	ft_newline();
	ft_printsep(15);
}
