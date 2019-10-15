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
	scanf_s("%d", &membership_status);

	if (membership_status == 1)
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

	int code, anymoreItems, wallScrapper = 0, tilesWaxes = 0, mudtarRemover = 0, dryBlower = 0, quantity;
	double wallScrapperST, tilesWaxesST, mudtarRemoverST, dryBlowerST, productGrandTotal, distance, charges;

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
			printf("                           Product Details                            ");
			break;

	case 2: do {
				printf("Please key in product code:\n");
				scanf_s("%d", &code);
				if (code == 101) {
					printf("Wall Scrapper\n");
					printf("Please key in quantity:\n");
					scanf_s("%d", &quantity);
					wallScrapper += quantity;
					printf("Do you have any more items? Please input a number to select an option:\n");
					printf("1.Yes\n");
					printf("2.No\n");
					scanf_s("%d", &anymoreItems);
				}
				else if (code == 202) {
					printf("Tiles Waxes\n");
					printf("Please key in quantity:\n");
					scanf_s("%d", &quantity);
					tilesWaxes += quantity;
					printf("Do you have any more items? Please input a number to select an option:\n");
					printf("1.Yes\n");
					printf("2.No\n");
					scanf_s("%d", &anymoreItems);
				}
				else if (code == 303) {
					printf("Mud/Tar Remover\n");
					printf("Please key in quantity:\n");
					scanf_s("%d", &quantity);
					mudtarRemover += quantity;
					printf("Do you have any more items? Please input a number to select an option:\n");
					printf("1.Yes\n");
					printf("2.No\n");
					scanf_s("%d", &anymoreItems);
				}
				else if (code == 404) {
					printf("Dry Blower\n");
					printf("Please key in quantity:\n");
					scanf_s("%d", &quantity);
					dryBlower += quantity;
					printf("Do you have any more items? Please input a number to select an option:\n");
					printf("1.Yes\n");
					printf("2.No\n");
					scanf_s("%d", &anymoreItems);
				}
				else {
					printf("Error 404 Product Not Found!");
				}
			} while (anymoreItems == 1);

			wallScrapperST = wallScrapper * 100;
			tilesWaxesST = tilesWaxes * 100;
			mudtarRemoverST = mudtarRemover * 100 * 0.8;
			dryBlowerST = dryBlower * 100 * 0.75;
			productGrandTotal = wallScrapperST + tilesWaxesST + mudtarRemoverST + dryBlowerST;

			printf("Your subtotal for Wall Scrapper is RM%.2lf\n", wallScrapperST);
			printf("Your subtotal for Tiles Waxes is RM%.2lf\n", tilesWaxesST);
			printf("Your subtotal for Mud/Tar Remover is RM%.2lf\n", mudtarRemoverST);
			printf("Your subtotal for Dry Blower is RM%.2lf\n", dryBlowerST);
			printf("Your grand total for all the products is RM%.2lf\n", productGrandTotal);
			break;

	case 3: printf("Please key in delivery destination's distance(KM)\n");
			scanf_s("%lf", &distance);

			if (distance <= 30)
			{
				charges = 50.00;
				printf("Your delivery charges is RM%.2lf", charges);
			}
			else if (distance > 30 && distance <= 100)
			{
				distance -= 30;
				charges = 50 + distance * 3;
				printf("Your delivery charges is RM%.2lf", charges);
			}
			else
			{
				printf("No delivery service available in your area.Sorry for any inconvenience.");
			}
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
