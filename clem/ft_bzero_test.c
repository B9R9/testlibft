void	bzero_test()
{
	char s1[] = "une baguette, merci !";
	char s2[] = "avec ceci ?";

	printf("%s bzero = %s ft_bzero = %s\n", s1, bzero(s1), ft_bzero(s1));
	printf("%s bzero = %s ft_bzero = %s\n", s2, bzero(s2), ft_bzero(s2));
	return (0);
}
void	ft_bzero_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_BZERO_TEST");
	bzero_test();
	ft_newline();
	ft_printsep(15);
}
