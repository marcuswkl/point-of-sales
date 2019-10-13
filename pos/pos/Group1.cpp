#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
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
	case 1: printf("Option1");
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