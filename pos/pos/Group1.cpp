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


printf("Please select your membership status :\n",membership_status);
printf("1 ---> Member\n");
printf("2 ---> Non-member\n\n");
scanf("%d",&membership_status);

if (membership_status== 1)
    {
        printf("Welcome back, Best Price's member.");
    }

else
{
    printf("Please join our membership to enjoy member's benefits.");
}

	getch();
	return 0;
}
