/******************************************************************************

** Student Name: Brandon Ross

** Student Number: s542092

** Date of submission: <Fri, 13 Oct 2017>

** Course: COSC1076 / COSC2207, Semester 2, 2017

******************************************************************************/
#include "vm_menu.h"

/**
 * vm_menu.c handles the initialisation and management of the menu array.
 **/

/**
 * In this function you need to initialise the array of menu items
 * according to the text to be displayed for the menu. This array is
 * an array of MenuItem with text and a pointer to the function
 * that will be called.
 **/
void initMenu(MenuItem * menu)
{
			
	stpcpy(menu[0].text, "Display Item");
	stpcpy(menu[1].text, "Purchace Items");
	stpcpy(menu[2].text, "Save and Exit");
	stpcpy(menu[3].text, "Add Item");
	stpcpy(menu[4].text, "Remove Item");
	stpcpy(menu[5].text, "Display Coins");
	stpcpy(menu[6].text, "Reset Stock");
	stpcpy(menu[7].text, "Reset Coins");
	stpcpy(menu[8].text, "Abort Program");
		

	
	}
void printMenu(MenuItem * menu){
	int x;
	
	printf("Main Menu\n");
	for (x=0; x<3;x++){
		printf("%d.%s\n",x+1,menu[x].text);
		
	}
	printf("\n");

	printf("Administrator-Only Menu:\n");
	for (x=3; x<MENU_SIZE;++x){
		printf("%d.%s\n",x+1,menu[x].text);
		
	}
	printf("Select your option (1-9):\n");
	
}

MenuFunction getMenuChoice(MenuItem * menu)
{
    return NULL;
}