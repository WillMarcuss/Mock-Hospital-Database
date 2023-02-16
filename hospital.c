



#include "stdio.h"

#include "stdlib.h"

#include "struct.h"

#include "string.h"

#include "populateRecords.h"

#include "patient.h"

#include "employee.h"



#define NUM_RECORDS 20



int menu();

void sizeStructs();

void overallSummary(PersonRec person, int numRecords);









int main(int argc, char *argv[])

{



	struct person *person = NULL;

	int numRecords;         // number of records to be created

	char rc = 0;



	// check the command line parameters for correct number of paramaters

	// if the number is wrong prompt for correct usage and quit

	//

	if(argc<=1){

		printf("You did not input any arguments, Please input one argument after typing the program name and press enter\n");

		printf("For example: ./a.out 7");

		exit(1);

	}

	





	



	// add code to get the number of records to be created

	// if number of records is not given then insruct the user what is required.

	

	if((atoi(argv[1])<1)){

		printf("Please enter numbers greater than or equal to 1! There can only be a positive number of records!");

		exit(1);

	}

	 numRecords = atoi(argv[1]);

	 person = malloc(numRecords*sizeof(PersonRec));

	 

	 



	// populating the array person with data of patients and employees

	populateRecords(person, numRecords);



	// add code here for menu handling

	

	int x = 0;

	int y = 0;

	char yORn[1] = "";

	while(x!=1){ //Warning user they are about to quit

	y = menu();

	if(y ==0){

		printf("Are you sure you want to quit? (y/n)\n");

		scanf("%s",yORn);

		if(strcmp(yORn,"n") == 0){ // If they change their mind, reprompt the menu

			y = menu();

		}

		free(person); // Freeing up memory

	}




	//Determining which function to call depending on users input
	switch(y)

	{

		case 0:

			x = 1;

			break;

		case 1:

			printEmployees(person, numRecords);

			printPatients(person,numRecords);

			break;

		case 2:

			searchPatients(person,numRecords);

			break;

		case 3:

			printEmployeesSummary(person, numRecords);

			break;

		case 4:

			printPatientSummary(person, numRecords,1);

			break;

		case 5:

			sizeStructs();

			break;
		case 6:
			printPatientSummary(person, numRecords,0);
			break;

	}

	}



	//





	return 0;

}

int menu()

{
	// Printing the menu until they choose a valid input
	int choice = 0;

	do{

	printf("Menu Options:\n");

	printf("1. Print all employees and Patients:\n");

	printf("2. Search for all patients by Family Name\n");

	printf("3. Summary of Employees Data\n");

	printf("4. Summary of Patients data\n");

	printf("5. Size of structures (PersonRec, PatientRec and EmployeeRec)\n");
	
	printf("6. Summary by Department\n");

	printf("0. Quit\n");

	scanf("%d",&choice);

	

	} while(choice <0 || choice >6);

	return choice;

}



void sizeStructs(){
	//Printing size of structs

	printf("Size of PersonRec: %lu\n",sizeof(PersonRec));

	printf("Size of PatientRec: %lu\n",sizeof(PatientRec));

	printf("Size of EmployeeRec: %lu\n",sizeof(EmployeeRec));

}
