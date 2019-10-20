#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char continueName;
int membership;option, end = 0, code, anymoreItems, wallS = 0, tilesW = 0, mudR = 0, dryB = 0, quantity;
double wallS_ST, tilesW_ST, mudR_ST, dryB_ST, product_GT, distance, charges, totalBill, grandTotal, discount1, discount2, payAmount1, payAmount2;

// This function prompts the user to key in the quantity of their items.
void keyInItems(const char itemName[]);

// This function asks the user if they have anymore items.
void askAnymoreItems();

// This function prints the subtotal of the items based on the calculated subtotal.
void printSubtotal(const char subtotalName[], double subtotal);

int main(void)
{
	printf("        ___       __    ______                                 _____        \n");
	printf("        __ |     / /_______  /__________________ ________      __  /______  \n");
	printf("        __ | /| / /_  _ \\\\_  /_  ___/  __ \\_  __ `__ \\  _ \\     _  __/  __ \ \n");
	printf("        __ |/ |/ / /  __/  / / /__ / /_/ /  / / / / /  __/     / /_ / /_/ / \n");
	printf("        `____/|__/  \\___//_/  \\___/ \\____//_/ /_/ /_/\\___/      \\__/ \\____/ \n\n");
	printf("________            _____________       _____                 ______  ___      ___________\n");
	printf("___  __ )_____________  /___  __ \\\\_________(_)__________      ___   |/  /_____ ___  /__  /\n");
	printf("__  __  |  _ \\_  ___/  __/_  /_/ /_  ___/_  /_  ___/  _ \\     __  /|_/ /_  __ `/_  /__  / \n");
	printf("_  /_/ //  __/(__  )/ /_ _  ____/_  /   _  / / /__ /  __/     _  /  / / / /_/ /_  / _  /  \n");
    printf("/_____/ \\___//____/ \\__/ /_/     /_/    /_/  \\___/ \\___/      /_/  /_/  \\__,_/ /_/  /_/   \n\n\n");

    printf("Enter any key to continue: \n\n\n");

    _getch();

	printf("Hi, welcome to Best Price Mall which has the best price in the market. \n");
	printf("These are the promotions that we are having in our store.\n\n");
    printf("Member discounts:\n");
    printf("10%% Discount will be given for purchases more than RM800\n");
    printf("12%% Discount will be given for purchases more than RM1000\n");
    printf("(condition applies only for available for members)\n\n");
    printf("Enter any key to continue: \n");

    _getch();

// Asks the user for membership status.
// Prints error if user input invalid number and asks the user again.
	do {

		printf("Please select your membership status by inputting numbers:\n");
		printf("1. Member\n");
		printf("2. Non-member\n\n");
		scanf_s(" %d", &membership);

		if (membership == 1)
		{
			printf("Welcome back, Best Price's member.\n\n");
		}

		else if (membership == 2)
		{
			printf("Please join our membership to enjoy member's benefits.\n\n");
		}

		else
		{
			printf("Error! Please input the numbers 1 or 2 only.\n");
		}

	} while (membership != 1 && membership != 2);

// Asks the user to select an option.
// User can keep selecting options until exit option is selected.
	do {

			printf("\nWhat do you want to do?\n");
			printf("Select an option below by inputting numbers:\n");
			printf("Option 1: Product and Price details\n");
			printf("Option 2: Calculate price of purchased items\n");
			printf("Option 3 : Calculate the delivery charges\n");
			printf("Option 4 : Calculate total pay amount\n");
			printf("Option 5 : Exit\n");

			scanf_s("%d", &option);

			switch (option) {

// Displays a table of products with details.
			case 1: printf("                                Product Details                              \n");
					printf("++==============++=====================++==============++==================++\n");
					printf("|| Product Code || Product Description || Retail Price || Special Discount ||\n");
					printf("++==============++=====================++==============++==================++\n");
					printf("||      101     ||    Wall Scrapper    ||    100.00    ||        --        ||\n");
					printf("||      202     ||    Tiles Waxes      ||    350.00    ||        --        ||\n");
					printf("||      303     ||    Mud/Tar Remover  ||    500.00    ||   20%% Discount   ||\n");
					printf("||      404     ||    Dry Blower       ||    850.00    ||   25%% Discount   ||\n");
					printf("++==============++=====================++==============++==================++\n");
					break;

// Asks the user to input a product code, then asks the user to input quantity.
// Prints error is user input invalid product code.
// Asks the user if they have anymore items.
// User can continue to input product code and quantity until they have no more items left.
			case 2: do	{

					printf("\nPlease key in product code:\n");
					scanf_s("%d", &code);
					if (code == 101) {
					  keyInItems("Wall Scrapper");
					  wallS += quantity;
					  askAnymoreItems();
					}
					else if (code == 202) {
					  keyInItems("Tiles Waxes");
					  tilesW += quantity;
					  askAnymoreItems();
					}
					else if (code == 303) {
					  keyInItems("Mud/Tar Remover");
					  mudR += quantity;
					  askAnymoreItems();
					}
					else if (code == 404) {
						keyInItems("Dry Blower");
						dryB += quantity;
						askAnymoreItems();
					}
					else {
					  printf("Error 404 Product Not Found!");
					}

              } while (anymoreItems == 1);

// Calculates subtotal of items purchased based on product price and quantity.
			wallS_ST = wallS * 100;
			tilesW_ST = tilesW * 100;
			mudR_ST = mudR * 100 * 0.8;
			dryB_ST = dryB * 100 * 0.75;
			product_GT = wallS_ST + tilesW_ST + mudR_ST + dryB_ST;

// Prints a list of subtotals for each product.
			printSubtotal("Wall Scrapper", wallS_ST);
			printSubtotal("Tiles Waxes", tilesW_ST);
			printSubtotal("Mud/Tar Remover", mudR_ST);
			printSubtotal("Dry Blower", dryB_ST);
			break;

// Asks the user to input their delivery destination's distrance in KM.
// Calculates the delivery charges based on distance from user input.
			case 3: printf("Please key in delivery destination's distance(KM)\n");
					scanf_s("%lf", &distance);

					if (distance <= 30) {
						charges = 50.00;
						printf("Your delivery charges is RM%.2lf\n", charges);
					}
					else if (distance > 30 && distance <= 100) {
						distance -= 30;
						charges = 50 + distance * 3;
						printf("Your delivery charges is RM%.2lf\n", charges);
					}
					else {
						printf("No delivery service available in your area.Sorry for any inconvenience.\n");
					}
					break;

// Calculates the grand total and discount given based on membership status and items purchased.
			case 4: totalBill = product_GT + charges;
					grandTotal = totalBill + (totalBill * 0.1);
					payAmount1 = grandTotal - (discount1);
					payAmount2 = grandTotal - (discount2);

                    printf("++==============++=====================++\n");
                    printf("||   Payment    ||       Amount        ||\n");
                    printf("++==============||=====================||\n");
                    printf("|| Total bill   ||       RM%.2f        ||\n", totalBill);
					printf("|| Grand Total  ||       RM%.2f        ||\n", grandTotal);
                    printf("++=====================================++\n");

					if (membership == 1 && totalBill >= 800 && totalBill <= 1000)
					{
						printf("10%% Discount will be given\n");
						printf("Total discount:RM%.2f \n\n", discount1);
						printf("The total amount is RM%.2f\n", payAmount1);

					}
					else if (membership == 1 && totalBill > 1000)
					{
						printf("12%% Discount will be given\n");
						printf("Total discount: RM%.2f \n\n", discount2);
						printf("The total amount is RM%.2f\n", payAmount2);

					}
					else if (membership == 1 && totalBill < 800)
					{
						printf("Although you're a member, but purchases are not over RM800\n");
						printf("Hence, no discount will be given :( \n\n");
						printf("The total amount is RM%.2f\n", grandTotal);


					}
					else
					{
						printf("No discount will be given:(\n\n");
						printf("The total amount is RM%.2f\n", grandTotal);
					}
					break;

			case 5: end = 1;
					break;

			default: printf("404 Option Not Found!");
			}
	} while (end == 0);
	exit(0);

	_getch();
	return 0;
}

void keyInItems(const char itemName[]) {
	printf("%s\n", itemName);
	printf("Please key in quantity:\n");
	scanf_s("%d", &quantity);
}

void askAnymoreItems() {
	printf("Do you have any more items? Please input a number to select an option:\n");
	printf("1.Yes\n");
	printf("2.No\n");
	scanf_s("%d", &anymoreItems);
}

void printSubtotal(const char subtotalName[], double subtotal) {
	printf("Your subtotal for %s is RM%.2lf\n", subtotalName, subtotal);
}