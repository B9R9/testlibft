void	memcpy_test()
{
	char s1[30];
	char s2[30] = "une chipo ! Aux epices";

	printf("%s memcpy = %s ft_memcpy = %s\n", s2, (char *)memcpy(s1, s2, 10), (char *)ft_memcpy(s1, s2, 10));
	return (0);
}
void	ft_memcpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCPY_TEST");
	memcpy_test();
	ft_newline();
	ft_printsep(15);
}
