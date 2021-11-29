
#include "testlibft.h"

void	strdel_test()
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 10);

	ft_strdel(&str);
		if (!str)
			write(1, "str = NULL", 4);
		else
			write(1, "str = NOT NULL", 8);
}
void	ft_strdel_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRDEL_TEST");
	strdel_test();
	ft_newline();
	ft_printsep(15);
}
