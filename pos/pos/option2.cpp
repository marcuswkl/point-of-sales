#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int code, anymoreItems, wallScrapper = 0, tilesWaxes = 0, mudtarRemover = 0, dryBlower = 0, quantity;
	double wallScrapperST, tilesWaxesST, mudtarRemoverST, dryBlowerST, productGrandTotal;

	do {
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
	} while(anymoreItems == 1);

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

	_getch();
	return 0;
}
