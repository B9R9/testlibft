#include "libft.h"
#include "testlibft.h"

void	strequ_test()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";

	char	s3[] = "";
	char	s4[] = "";

	char	s5[] = "Hello";
	char	s6[] = "world";

	char	s7[] = "	";
	char	s8[] = "	";

	char	s9[] = "	Hell o";
	char	s10[] = "	Hell o";

	char	s11[] = "#$&";
	char	s12[] = "#$&";

	char	s13[] = "\0";
	char	s14[] = "###$$@";

	char	s15[] = "\0";
	char	s16[] = "\0";

	char	s17[] = "hElLo";
	char	s18[] = "HeLlO";

	printf("__SYSTEM__TEST_1__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s1, s2));
	printf("__SYSTEM__TEST_2__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s3, s4));
	printf("__SYSTEM__TEST_3__:\t 0 \t\t __YOURS__\t%d\n", ft_strequ(s5, s6));
	printf("__SYSTEM__TEST_4__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s7, s8));
	printf("__SYSTEM__TEST_5__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s9, s10));
	printf("__SYSTEM__TEST_6__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s11, s12));
	printf("__SYSTEM__TEST_7__:\t 0 \t\t __YOURS__\t%d\n", ft_strequ(s13, s14));
	printf("__SYSTEM__TEST_8__:\t 1 \t\t __YOURS__\t%d\n", ft_strequ(s15, s16));
	printf("__SYSTEM__TEST_9__:\t 0 \t\t __YOURS__\t%d\n", ft_strequ(s17, s18));

}

void	ft_strequ_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STREQU TEST");
	ft_newline();
	strequ_test();
	ft_newline();
	ft_printsep(15);
}
