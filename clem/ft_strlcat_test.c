void	strlcat_test()
{
	char s1[25] = "Merguez";
	char s2[25] = "couscous";
	char s3[25] = "Merguez";

	printf("%s, strlcat = %zu ft_strlcat = %zu\n", s2, strlcat(s2, s1, 20), ft_strlcat(s2, s3, 20));
	return (0);
}
void	ft_strlcat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRLCAT_TEST");
	strlcat_test();
	ft_newline();
	ft_printsep(15);
}
