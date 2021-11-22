
#include "testlibft.h"

void	strjoin_test()
{
	/*AVERAGE STRING*/
	char	s1[] = "Hello";
	char	s2[] = "world";

	/*EMPTY STRING*/
	char	s3[] = "";
	char	s4[] = "";

	/*NUMBERS IN STRINGS*/
	char	s5[] = "123Hello";
	char	s6[] = "world456";

	/*SPACE SIN STRING*/
	char	s7[] = "He llo";
	char	s8[] = "worl d";

	/*TABS IN STRINGS*/
	char	s9[] = "	Hell o";
	char	s10[] = "wor	ld";

	/*SPECIAL STRINGS*/
	char	s11[] = "#$&Hello";
	char	s12[] = "world#$&";

	/*S1 is \0*/
	char	s13[] = "\0";
	char	s14[] = "world";

	/*SRING ARE /0*/
	char	s15[] = "\0";
	char	s16[] = "\0";

	printf("__AVERAGE_STRINGS__:\n");
	printf("%s\n", ft_strjoin(s1, s2));
	printf("__EMPTY_STRINGS__:");
	printf("%s\n", ft_strjoin(s3, s4));
	printf("__NUMBERS_IN_STRINGS__:\n");
	printf("%s\n", ft_strjoin(s5, s6));
	printf("__SPACES_IN_STRINGS__:\n");
	printf("%s\n", ft_strjoin(s7, s8));
	printf("__TABS_IN_STRINGS__:\n");
	printf("%s\n", ft_strjoin(s9, s10));
	printf("__SPECIAL_CHARACTERS__:\n");
	printf("%s\n", ft_strjoin(s11, s12));
	printf("__S1_IS_/0:\n");
	printf("%s\n", ft_strjoin(s13, s14));
	printf("__STRINGS_ARE_/0:\n");
	printf("%s\n", ft_strjoin(s15, s16));
}

void	ft_strjoin_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRJOIN TEST");
	ft_newline();
	strjoin_test();
	ft_newline();
	ft_printsep(15);
}
