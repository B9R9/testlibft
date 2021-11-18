#include "libft.h"
#include "testlibft.h"

/*static void	ft_newline()
{
	ft_putchar('\n');
}
*/
int main()
{
	int	userchoice;
	int	functionchoice;

	printf("***************************************************************************\n");
	printf("********************** Welcome to this LIBFT tester!***********************\n");
	printf("***************************************************************************\n");


printf("\nHere we gonna try to test your librairie in different way. Sometimes we will\n");
printf("ask you to participate. So be ready and let's start !\n");

//Use  do while to create a loop for the menu until we decide to quit
ft_putchar('\n');
printf("**********************************  MENU ***********************************\n");
printf("---- To choose your function to test.                Press 1\n");
printf("---- To test all function from the part1.            Press 2\n");
printf("---- To test all functions from the part 2.          Press 3\n");
printf("---- To test everything.                             Press 4\n");
printf("---- To exit.                                        Press 5\n");
printf("Your choice ? ");
scanf("%d", &userchoice);// Need safety in case the return is not expected

switch(userchoice)
{
	case 1:
		ft_newline();
		// we can use an arr with all function name sorted by alphabetic order and a while loop to print
		printf("Choose the function:\n\n");
		printf("1  - FT_PUTCHAR          11 - FT_TOLOWER\n");
		printf("2  - FT_PUTCHAR_FD       12 - FT_TOUPPER\n");
		printf("3  - FT_PUTSTR           13 - FT_POur\n");
		printf("4  - FT_PUTSTR_FD\n");
		printf("5  - FT_PUTENDL\n");
		printf("6  - FT_PUTENDL_FD\n");
		printf("7  - FT_PUTNBR\n");
		printf("8  - FT_PUTNBR_FD\n");
		printf("9  - FT_STRLEN\n");
		printf("10 - FT_test\n");
		ft_newline(); 
		printf("Your choice? "); // option for typing the name of the function if we do that we need to pass every letter to upper or lower to avoid mistake typing 
		scanf("%d", &functionchoice);
		switch(functionchoice)
		{
			case 1:
				ft_newline();
				test_ft_putchar();
				break;
			case 2:
				ft_newline();
				ft_putchar_fd_test();
				break;
			case 3:
				ft_newline();
				ft_putstr_test();
				break;
			case 4:
				ft_newline();
				ft_putstr_fd_test();
				break;
			case 5:
				ft_newline();
				ft_putendl_test();
				break;
			case 6:
				ft_newline();
				ft_putendl_fd_test();
				break;
			case 7:
				ft_newline();
				ft_putnbr_test();
				break;
			case 8:
				ft_newline();
				ft_putnbr_fd_test();
				break;
			case 9:
				ft_newline();
				ft_strlen_test();
				break;
			case 10:
				ft_newline();
				break;
			case 11:
				ft_newline();
				ft_tolower_test();
				break;
			case 12:
				ft_newline();
				ft_toupper_test();
				break;
				
		}
		break;
		
}
}
