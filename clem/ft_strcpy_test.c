void	strcpy_test()
{
	char s1[50] = "BONSOIR MULHOUSE";
	char s2[50];


	printf("%s, strcpy = %s ft_strcpy = %s\n", s1, strcpy(s1 , "Oh les champions"), ft_strcpy(s2, "Oh les chanpions"));
	return (0);
}
void	ft_strcpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCPY_TEST");
	strcpy_test();
	ft_newline();
	ft_printsep(15);
}
