/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:53:57 by ccariou           #+#    #+#             */
/*   Updated: 2021/11/27 22:55:07 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strsplit_test()		
{
	char	*str = "**Toi qui voulait *** Toi qui**voulait*!";
	char	**split;
	char	*strempty = "          ";
	char	*strdash = "In/////viata /derapezi// Mai repede decat crezi//// Pe strada, in parcuri sau canale /Vezi destule dovezi////";
	char	*strspace = "Lunettes Cartier comme Tee Grizzley J'arrive lourd comme     dix grizzlis,  il m'faut     un salaire comme si j'joue chez  les    Grizzlies";
	char	*stre = "Comme des petites girouettes Ca nous fait du vent dans les couettes C'est bête, c'est bête Mais c'est bon pour la tête";
	char	*stri = "Je fais un rêve quand vers le soir l'océan rejoint le ciel elle me dit dans un cri après l'orage à partir d'aujourd'hui on voyage";

	printf("test 1 original :%s\n", str);
	split = ft_strsplit(str, '*');
	ft_print(split);
	
	printf("test 2 empty original :%s\n", strempty);
	split = ft_strsplit(strempty, ' ');
	ft_print(split);

	printf("test 3 // original :%s\n", strdash);
	split = ft_strsplit(strdash, '/');
	ft_print(split);

	printf("test 4 space original :%s\n", strspace);
	split = ft_strsplit(strspace, ' ');
	ft_print(split);

	printf("test 5 e original :%s\n", stre);
	split = ft_strsplit(stre, 'e');
	ft_print(split);

	printf("test 6 i original :%s\n", str); 
	split = ft_strsplit(stri, 'i');
	ft_print(split);
	
	return(0);

}

static void			ft_print(char **tabstr)
{
	int	i = 0;
	while (tabstr[i] != NULL)
	{
		printf("%s\t%u\n", tabstr[i], i);
		i++;
	}
	i = 0;
	while (tabstr[i] != NULL)
	{
		free(tabstr[i]);
		i++;
	}
	tabstr = NUL
}

void	ft_strsplit_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRSPLIT_TEST");
	strsplit_test();
	ft_newline();
	ft_printsep(15);
}
