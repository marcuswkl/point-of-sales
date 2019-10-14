#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	printf("  ______               __        ______        __                  _______         __ __ \n");
	printf("      __ \.-----.-----.|  |_     |   __ \.----.|__|.----.-----.     |   |   |.---.-.|  |  | \n");
	printf(" |   __ <|  -__|__ --||   _|    |    __/|   _||  ||  __|  -__|    |       ||  _  ||  |  | \n");
	printf(" |______/|_____|_____||____|    |___|   |__|  |__||____|_____|    |__|_|__||___._||__|__|\n\n");

	printf("Hi, we are the Best Price Mall which has the best price in the market. \n");
	printf("If you can find anything cheaper than our shop then..... \n");

	printf(" __  __ __           __ __             _______         __                __       \n");
	printf("|  |/  |__|.-----.--|  |  |.--.--.    |     __|.-----.|  |_.-----.--.--.|  |_     \n");
	printf("|     <|  ||     |  _  |  ||  |  |    |    |  ||  -__||   _|  _  |  |  ||   _|    \n");
	printf("|__|\__ |__||__|__|_____|__||___  |    |_______||_____||____|_____|_____||____|    \n");
	printf("                           |_____|                                                \n\n");

	char continue_name;
	int membership_status;
  
	printf("Please select your membership status :\n");
	printf("1 ---> Member\n");
	printf("2 ---> Non-member\n\n");
	scanf_s("%d",&membership_status);
  
	if (membership_status== 1)
	{
		printf("Welcome back, Best Price's member.\n\n");
	}

	else
	{
		printf("Please join our membership to enjoy member's benefits.\n\n");
	}

	int option;

	printf("What do you want to do?\n");
	printf("Select an option below by inputting numbers:\n");
	printf("Option 1: Product and Price details\n");
	printf("Option 2: Calculate price of purchased items\n");
	printf("Option 3 : Calculate the delivery charges\n");
	printf("Option 4 : Calculate total pay amount\n");
	printf("Option 5 : Exit\n");

	scanf_s("%d", &option);
	switch (option) {
		case 1: printf("+-------------+--------------------+-------------+-----------------+\n");
			printf("| ProductCode | ProductDescription | RetailPrice | SpecialDiscount |\n");
			printf("+-------------+--------------------+-------------+-----------------+\n");
			printf("|      101    | Wall Scrapper      |    100.00   |       -         |\n");
			printf("|      202    | Tiles Waxes        |    350.00   |       -         |\n");
			printf("|      303    | Mud/Tar Remover    |    500.00   |   20%% Discount  |\n");
			printf("|      404    | Dry Blower         |    850.00   |   25%% Discount  |\n");
			printf("+-------------+--------------------+-------------+-----------------+\n");
			printf("                      Diagram 1: Product Details               ");
		break;
		case 2: printf("Option2");
		break;
		case 3: printf("Option3");
		break;
		case 4: printf("Option4");
		break;
		case 5: exit(0);
		break;
		default: printf("404 Option Not Found!");
	}

	_getch();
	return 0;
}
