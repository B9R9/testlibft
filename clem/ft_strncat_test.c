void	strncat_test()
{
	char s1[25] = "Merguez";
	char s2[25] = "couscous";
	char s3[25] = "Merguez";

	printf("%s, strncat = %s ft_strncat = %s\n", s2, strncat(s2, s1, 5), ft_strncat(s2, s3, 5));
	return (0);
}
void	ft_strncat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCAT_TEST");
	strncat_test();
	ft_newline();
	ft_printsep(15);
}
