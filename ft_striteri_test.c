#include "testlibft.h"

static void		iter(unsigned int i, char *c)
{
	static int indexArray[21] = {0};

	if (i > 20 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

static	void		striteri_test()
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 22);
	if(!str)
		ft_putstr("NULL");
	else
	{
		strcpy(str, "Quoi de neuf doctor !");
		printf("STR:  %s\n",str);
		ft_striteri(str, &iter);
	}
	printf("Our function will turn lower case in uppercase et upper in lower\n");
	printf("After str: %s\n",str);

	free(str);
}

void	ft_striteri_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRITERI_TEST");
	striteri_test();
	ft_newline();
	ft_printsep(15);
}
