#include"testlibft.h"

void	strncpy_test()
{
	char s1[50];
	char s2[50];

	printf("%s, strncpy = %s ft_strncpy = %s\n", s1, strncpy(s1 , "on est tous ensemble", sizeof(s1)), ft_strncpy(s2, "on est tous ensemble", sizeof(s2)));
	return (0);
}
void	ft_strncpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCPY_TEST");
	strncpy_test();
	ft_newline();
	ft_printsep(15);
}
