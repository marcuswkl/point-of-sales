#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int noMoreItems = 0, wallScrapper = 0, tilesWaxes = 0, mudtarRemover = 0, dryBlower = 0, quantity;
	char code[3];

	//do {
		printf("Please key in product code:\n");
		scanf_s("%s", code);
			if (code == "101") {
				printf("Wall Scrapper\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				wallScrapper += quantity;
			}
			else if (code == "202") {
				printf("Tiles Waxes\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				tilesWaxes += quantity;
			}
			else if (code == "303") {
				printf("Mud/Tar Remover\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				mudtarRemover += quantity;
			}
			else if (code == "404") {
				printf("Dry Blower\n");
				printf("Please key in quantity:\n");
				scanf_s("%d", &quantity);
				dryBlower += quantity;
			}
			else {
				printf("Error 404 Product Not Found!");
			}
	//} while(condition);

	_getch();
	return 0;
}
