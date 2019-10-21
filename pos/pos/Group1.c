#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char continueName;
int membership, option, end = 0, code, anymoreItems, quantity;
double productGT, distance, charges, totalBill, grandTotal;

int itemQuantity[4] = { 0, 0, 0, 0 }; // Wall Scrapper, Tiles Waxes, Mud/Tar Remover, Dry Blower
double itemSubtotal[4]; // Wall Scrapper Subtotal, Tiles Waxes Subtotal, Mud/Tar Remover Subtotal, Dry Blower Subtotal
double discount[2]; // 10% Discount, 12% Discount
double payAmount[2]; // grandTotal - 10% Discount, grandTotal - 12% Discount

void keyInItems(const char itemName[]);
void askAnymoreItems();
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
		// Change numbers to Y/N then use uppercase and lowercase function
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
					  itemQuantity[0] += quantity;
					  askAnymoreItems();
					}
					else if (code == 202) {
					  keyInItems("Tiles Waxes");
					  itemQuantity[1] += quantity;
					  askAnymoreItems();
					}
					else if (code == 303) {
					  keyInItems("Mud/Tar Remover");
					  itemQuantity[2] += quantity;
					  askAnymoreItems();
					}
					else if (code == 404) {
						keyInItems("Dry Blower");
						itemQuantity[3] += quantity;
						askAnymoreItems();
					}
					else {
					  printf("Error 404 Product Not Found!");
					}

              } while (anymoreItems == 1);

// Calculates subtotal of items purchased based on product price and quantity.
			itemSubtotal[0] = itemQuantity[0] * 100;
			itemSubtotal[1] = itemQuantity[1] * 350;
			itemSubtotal[2] = itemQuantity[2] * 500 * 0.8;
			itemSubtotal[3] = itemQuantity[3] * 800 * 0.75;
			productGT = itemSubtotal[0] + itemSubtotal[1] + itemSubtotal[2] + itemSubtotal[3];

// Prints a list of subtotals for each product.
			printSubtotal("Wall Scrapper", itemSubtotal[0]);
			printSubtotal("Tiles Waxes", itemSubtotal[1]);
			printSubtotal("Mud/Tar Remover", itemSubtotal[2]);
			printSubtotal("Dry Blower", itemSubtotal[3]);
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
			case 4: totalBill = productGT + charges;
					grandTotal = totalBill + (totalBill * 0.1);
					discount[0] = grandTotal * 0.1;
					discount[1] = grandTotal * 0.12;
					payAmount[0] = grandTotal - (discount[0]);
					payAmount[1] = grandTotal - (discount[1]);

                    printf("++==============++=====================++\n");
                    printf("||   Payment    ||       Amount        ||\n");
                    printf("++==============||=====================||\n");
                    printf("|| Total bill   ||       RM%.2f     ||\n", totalBill);
					printf("|| Grand Total  ||       RM%.2f     ||\n", grandTotal);
                    printf("++=====================================++\n");

					if (membership == 1 && totalBill >= 800 && totalBill <= 1000)
					{
						printf("10%% Discount will be given\n");
						printf("Total discount:RM%.2lf \n\n", discount[0]);
						printf("The total amount is RM%.2lf\n", payAmount[0]);

					}
					else if (membership == 1 && totalBill > 1000)
					{
						printf("12%% Discount will be given\n");
						printf("Total discount: RM%.2lf \n\n", discount[1]);
						printf("The total amount is RM%.2lf\n", payAmount[1]);

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
// This function prompts the user to key in the quantity of their items.
void keyInItems(const char itemName[]) {
	printf("%s\n", itemName); // Prints the name of the item selected based on the product code.
	printf("Please key in quantity:\n");
	scanf_s("%d", &quantity); // Stores the quantity input in quantity variable.
}

// This function asks the user if they have anymore items.
void askAnymoreItems() {
	printf("Do you have any more items? Please input a number to select an option:\n");
	printf("1.Yes\n");
	printf("2.No\n");
	scanf_s("%d", &anymoreItems); // Stores the number input in anymoreItems variable.
}

// This function prints the subtotal of the items based on the calculated subtotal.
void printSubtotal(const char subtotalName[], double subtotal) {
	printf("Your subtotal for %s is RM%.2lf\n", subtotalName, subtotal); // Prints the subtotal for the item.
}