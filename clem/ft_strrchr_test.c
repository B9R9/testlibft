void	strrchr_test()
{
	char s1[50] = "Oh oui monsieur oh oui";

	printf("%s, strrchr = %s ft_strrchr = %s\n", s2, strrchr(s1, "oui"), ft_strrchr(s1, "oui"));
	return (0);
}

void	ft_strrchr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRRCHR_TEST");
	strrchr_test();
	ft_newline();
	ft_printsep(15);
}
