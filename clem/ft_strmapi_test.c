/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:28:31 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/28 15:34:34 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	ftest(unsigned int n,char c)
{
	n = 0;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	strmapi_test()
{
	char	*str1 = "Je suis limite nervous breakdown";
	char	*str2 = "Une WOUiche lorraine, on dit une WOUiche lorraine";
	char	*s2;

	printf(" ORIGINAL: %s\n", str1);
	s2 = ft_strmapi(str1, &ftest);
	printf("FT_STRMAPI RETURN: %s\n", s2);
	free(new);

	printf(" ORIGINAL: %s\n", str2);
	s2 = ft_strmapi(str2, &ftest);
	printf("FT_STRMAPI RETURN: %s\n", s2);
	free(new);
}

void	ft_strmapi_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRMAPI");
	strmapi_test();
	ft_newline();
	ft_printsep(15);
}
