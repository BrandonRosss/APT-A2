/******************************************************************************

** Student Name: Brandon Ross

** Student Number: s542092

** Date of submission: <Fri, 13 Oct 2017>

** Course: COSC1076 / COSC2207, Semester 2, 2017

******************************************************************************/
#include "vm.h"
/*
index 1 from the argv[1]

*/

int main(int argc, char ** argv)
{
	FILE* fp;
	char input[1 + EXTRA_SPACES];
	


	
	MenuItem menu [MENU_SIZE];
	initMenu(menu);
	printMenu(menu);

	fp = fopen(argv[1], "r");
	char holdingLine[ID_LEN+NAME_LEN+DESC_LEN+NUM_DENOMS];

	while(fgets(input, sizeof(input), stdin))
	{
	

		while(fgets(holdingLine, sizeof(holdingLine), fp))
		{
			

	/*		fgets(holdingLine,ID_LEN+NAME_LEN+DESC_LEN+NUM_DENOMS,fp);*/
			printf("%s" , holdingLine);
			

		
			/*if (strncmp(input,"3",3)==3)
			{
				printf("Saving... \n");
				printf("Exiting... \n");
				break;
			
			}*/
			
		}
		
	}
	printf("out of loop");
	fclose(fp);
	return TRUE;

		
    return EXIT_SUCCESS;
}

