#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char continue_name;
int membership_status;
int option, end = 0;
int code, anymoreItems, wallScrapper = 0, tilesWaxes = 0, mudtarRemover = 0, dryBlower = 0, quantity;
double wallScrapperST, tilesWaxesST, mudtarRemoverST, dryBlowerST, productGrandTotal, total_bill, grand_total, total_discount1, total_discount2, pay_amount, pay_amount2, distance, charges;

void keyInItems(const char itemName[]);
void askAnymoreItems();
void calculateSubtotal(const char subtotalName[], double subtotal);

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

	printf("Hi, we are the Best Price Mall which has the best price in the market. \n");
	printf("The below are the promotions that we are having in our store.\n\n");
    printf("Member discounts:\n");
    printf("10%% Discount will be given for purchases more than RM800\n");
    printf("12%% Discount will be given for purchases more than RM1000\n");
    printf("(condition applies only for available for members)\n\n");
    printf("Enter any key to continue: \n");

    _getch();

	printf("Please select your membership status :\n");
	printf("1 ---> Member\n");
	printf("2 ---> Non-member\n\n");
	scanf_s(" %d", &membership_status);

	if (membership_status == 1)
	{
		printf("Welcome back, Best Price's member.\n\n");
	}

	else
	{
		printf("Please join our membership to enjoy member's benefits.\n\n");
	}

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

			case 2: do	{
                printf("\nPlease key in product code:\n");
                scanf_s("%d", &code);
                if (code == 101) {
                  keyInItems("Wall Scrapper");
                  wallScrapper += quantity;
                  askAnymoreItems();
                }
                else if (code == 202) {
                  keyInItems("Tiles Waxes");
                  tilesWaxes += quantity;
                  askAnymoreItems();
                }
                else if (code == 303) {
                  keyInItems("Mud/Tar Remover");
                  mudtarRemover += quantity;
                  askAnymoreItems();
                }
				else if (code == 404) {
					keyInItems("Dry Blower");
					dryBlower += quantity;
					askAnymoreItems();
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

			calculateSubtotal("Wall Scrapper", wallScrapperST);
			calculateSubtotal("Tiles Waxes", tilesWaxesST);
			calculateSubtotal("Mud/Tar Remover", mudtarRemoverST);
			calculateSubtotal("Dry Blower", dryBlowerST);
			break;

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

			case 4: total_bill = productGrandTotal + charges;
					grand_total = total_bill + (total_bill * 0.1);
					pay_amount = grand_total - (total_discount1);
					pay_amount2 = grand_total - (total_discount2);

                    printf("++==============++=====================++\n");
                    printf("||   Payment    ||      Amount         ||\n");
                    printf("++==============||=====================||\n");
                    printf("||Total bill    ||      RM%.2f         ||\n", total_bill);
					printf("||Grand Total   ||      RM%.2f         ||\n", grand_total);
                    printf("++=====================================++\n");

					if (membership_status == 1 && total_bill >= 800 && total_bill <= 1000)
					{
						printf("10%% Discount will be given\n");
						printf("Total discount:RM%.2f \n\n", total_discount1);
						printf("The total amount is RM%.2f\n", pay_amount);

					}
					else if (membership_status == 1 && total_bill > 1000)
					{
						printf("12%% Discount will be given\n");
						printf("Total discount: RM%.2f \n\n", total_discount2);
						printf("The total amount is RM%.2f\n", pay_amount2);

					}
					else if (membership_status == 1 && total_bill < 800)
					{
						printf("Although you're a member, but purchases are not over RM800\n");
						printf("Hence, no discount will be given :( \n\n");
						printf("The total amount is RM%.2f\n", grand_total);


					}
					else
					{
						printf("No discount will be given:(\n\n");
						printf("The total amount is RM%.2f\n", grand_total);
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

void calculateSubtotal(const char subtotalName[], double subtotal) {
	printf("Your subtotal for %s is RM%.2lf\n", subtotalName, subtotal);
}