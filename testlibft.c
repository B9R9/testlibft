#include "libft.h"
#include "testlibft.h"

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
do{
printf("**********************************  MENU ***********************************\n");
printf("---- To choose your function to test.                Press 1\n");
printf("---- To test all function from the part1.            Press 2\n");
printf("---- To test all functions from the part 2.          Press 3\n");
printf("---- To test everything.                             Press 4\n");
printf("---- To exit.                                        Press 0\n");
printf("Your choice ? ");
scanf("%d", &userchoice);// Need safety in case the return is not expected

switch(userchoice)
{
	case 1:
		do{
		ft_newline();
		// we can use an arr with all function name sorted by alphabetic order and a while loop to print
		printf("Choose the function:\n\n");
		printf("1  - FT_PUTCHAR		11 - FT_TOLOWER		21 - FT_MEMCPY		31 - FT_STRNCMP		41 - FT_		51 - FT_\n");
		printf("2  - FT_PUTCHAR_FD	12 - FT_TOUPPER		22 - FT_MEMCCPY		32 - FT_STRNCPY		42 - FT_		52 - FT_\n");
		printf("3  - FT_PUTSTR		13 - FT_ISALPH		23 - FT_MEMSET		33 - FT_STRNSTR		43 -FT_\n");
		printf("4  - FT_PUTSTR_FD	14 - FT_ITOA		24 - FT_STRCAT		34 - FT_STRRCHR		44 - FT_\n");
		printf("5  - FT_PUTENDL		15 - FT_STRJOIN		25 - FT_STRCHR		35 - FT_STRSTR		45 - FT_\n");
		printf("6  - FT_PUTENDL_FD	16 - FT_BZERO		26 - FT_STRCMP		36 - FT_			46 - FT_\n");
		printf("7  - FT_PUTNBR		17 - FT_ISALNUM		27 - FT_STRCPY		37 - FT_			47 - FT_\n");
		printf("8  - FT_PUTNBR_FD	18 - FT_ISACII		28 - FT_STRDUP		38 - FT				48 - FT__\n");
		printf("9  - FT_STRLEN		19 - FT_ISDIGIT		29 - FT_STRLCAT		39 - FT_			49 - FT_\n");
		printf("10 - FT_ATOI		20 - FT_ISPRINT		30 - FT_STRNCAT		40 - FT_			50 - FT_\n");
		printf("To return to the main menu Press 0\n");
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
				ft_atoi_test();
				break;
			case 11:
				ft_newline();
				ft_tolower_test();
				break;
			case 12:
				ft_newline();
				ft_toupper_test();
				break;
			case 13:
				ft_newline();
				ft_isalpha_test();
				break;
			case 14:
				ft_newline();
				ft_itoa_test();
				break;
			case 15:
				ft_newline();
				ft_strjoin_test();
				break;
			case 16:
				ft_newline();
				ft_bzero_test();
				break;
			case 17:
				ft_newline();
				ft_isalnum_test();
				break;
			case 18:
				ft_newline();
				ft_isascii_test();
				break;
			case 19:
				ft_newline();
				ft_isdigit_test();
				break;
			case 20:
				ft_newline();
				ft_isprint_test();
				break;
			case 21:
				ft_newline();
				ft_memccpy_test();
				break;
			case 22:
				ft_newline();
				ft_memcpy_test();
				break;
			case 23:
				ft_newline();
				ft_memset_test();
				break;
			case 24:
				ft_newline();
				ft_strcat_test();
				break;
			case 25:
				ft_newline();
				ft_strchr_test();
				break;
			case 26:
				ft_newline();
				ft_strcmp_test();
				break;
			case 27:
				ft_newline();
				ft_strcpy_test();
				break;
			case 28:
				ft_newline();
				ft_strdup_test();
				break;
			case 29:
				ft_newline();
				ft_strlcat_test();
				break;
			case 30:
				ft_newline();
				ft_strncat_test();
				break;
			case 31:
				ft_newline();
				ft_strncmp_test();
				break;
			case 32:
				ft_newline();
				ft_strncpy_test();
				break;
			case 33:
				ft_newline();
				ft_strnstr_test();
				break;
			case 34:
				ft_newline();
				ft_strrchr_test();
				break;
			case 35:
				ft_newline();
				ft_strstr_test();
				break;
			case 36:
				ft_newline();
				ft_strequ_test():
				break;
			break;
		}
		}while(functionchoice != 0);
		break;

}
}while(userchoice != 0);
}
