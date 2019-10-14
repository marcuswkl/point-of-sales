#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int code, noMoreItems, wallScrapper = 0, tilesWaxes = 0, mudtarRemover = 0, dryBlower = 0, quantity;

	do {
		printf("Please key in product code:\n");
		scanf_s("%d", &code);
			if (code == 101) {
				printf("Wall Scrapper\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				wallScrapper += quantity;
				printf("Do you have any more items? Please input a number to select an option:\n");
				printf("0.Yes\n");
				printf("1.No\n");
				scanf_s("%d", &noMoreItems);
			}
			else if (code == 202) {
				printf("Tiles Waxes\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				tilesWaxes += quantity;
				printf("Do you have any more items? Please input a number to select an option:\n");
				printf("0.Yes\n");
				printf("1.No\n");
				scanf_s("%d", &noMoreItems);
			}
			else if (code == 303) {
				printf("Mud/Tar Remover\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				mudtarRemover += quantity;
				printf("Do you have any more items? Please input a number to select an option:\n");
				printf("0.Yes\n");
				printf("1.No\n");
				scanf_s("%d", &noMoreItems);
			}
			else if (code == 404) {
				printf("Dry Blower\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				dryBlower += quantity;
				printf("Do you have any more items? Please input a number to select an option:\n");
				printf("0.Yes\n");
				printf("1.No\n");
				scanf_s("%d", &noMoreItems);
			}
			else {
				printf("Error 404 Product Not Found!");
			}
	} while(noMoreItems == 0);

	printf("");

	_getch();
	return 0;
}
