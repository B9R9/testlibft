/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:13:25 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/28 15:34:43 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "testlibft.h"

static char	ftest(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	strmap_test()
{
	char	*str1 = "Serge ! C’est toi mon fils ?!";
	char	*str2 = "Nikoumouk, ça veut dire longue vie";
	char	*s2;

	printf(" ORIGINAL: %s\n", str1);
	s2 = ft_strmap(str1, &ftest);
	printf("FT_STRMAP RETURN: %s\n", s2);
	free(new);

	printf(" ORIGINAL: %s\n", str2);
	s2 = ft_strmap(str2, &ftest);
	printf("FT_STRMAP RETURN: %s\n", s2);
	free(new);
}

void	ft_strmap_test()
{
		ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRMAP");
	strmap_test();
	ft_newline();
	ft_printsep(15);
}
