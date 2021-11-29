#include "testlibft.h"

static void		iter(char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

static void		striter_test()
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 22);
	if(!str)
		ft_putstr("NULL");
	else
	{
		strcpy(str, "Quoi de neuf doctor !");
		printf("STR:  %s\n",str);
		ft_striter(str, &iter);
	}
	printf("Our function will turn lower case in uppercase et upper in lower\n");
	printf("After str: %s\n",str);

}
void	ft_striter_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRITER_TEST");
	striter_test();
	ft_newline();
	ft_printsep(15);
}
