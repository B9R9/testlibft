#include"testlibft.h"

void	strdup_test()
{
	char s1[20] = "oh les champions";
	char *s2;
	char *s3;

	s2 = ft_strdup(s1);
	s3 = strdup(s1);
	printf("%s, strdup = %s ft_strdup = %s\n", s1, s3 ,s2);
	return (0);
}
void	ft_strdup_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRDUP_TEST");
	strdup_test();
	ft_newline();
	ft_printsep(15);
}
