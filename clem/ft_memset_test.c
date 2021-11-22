#include"testlibft.h"

void	memset_test()
{
	char s1[25] = "Un couscous complet harissa";
	char s2[25];

	printf("%s memset = %s ft_memset = %s\n", s1, memset(s1, '!', 7), ft_memset(s1, '!', 7) );
	return (0);
}
void	ft_memset_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMESET_TEST");
	memset_test();
	ft_newline();
	ft_printsep(15);
}
