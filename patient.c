



#include "string.h"

#include "stdio.h"

#include "patient.h"



// ADD DOCUMENTATION



/********************************************************************/

void printPatient(PersonRec person)



{
	// Printing and formatting the patient data
    char name[33];

    sprintf(name,"%s %s",person.firstName,person.familyName);

    printf("%-20s ",name);

    printf("dept: %2d ",person.patient.department);

    printf("days in hospital: %3d ",person.patient.numDaysInHospital);

    printf("severity: %2d ",person.patient.severity);

    printf("daily cost: %3d ",person.patient.dailyCost);

    printf("total cost: %5d\n",(person.patient.dailyCost)*(person.patient.numDaysInHospital));



}



/********************************************************************/

void printPatients(PersonRec *person, int numRecords)

{
// Iterating through all the people, and if they are a patient, then print their data
printf("\nPatients:\n");

    for (int i = 0; i < numRecords; i++)

    {

        if (person->emplyeeOrPatient == 1)

        {

            printPatient(*person);

        }

        person++;

    }

}



/********************************************************************/

void printPatientSummary(PersonRec *person, int numRecords,int case6)

{
	// Initializing all variables for each department
    int numPatients = 0;

    float totalDC = 0;

    int numPatients0 = 0;

    float totalDC0= 0;

    int numPatients1= 0;

    float totalDC1= 0;

    int numPatients2= 0;

    float totalDC2= 0;

    int numPatients3= 0;

    float totalDC3= 0;

    int numPatients4 = 0;

    float totalDC4 = 0;

    int numPatients5 = 0;

    float totalDC5 = 0;

	// Iterating through each person, and if they are a patient, compute their data
    for (int i = 0; i < numRecords; i++)

    {

        if (person->emplyeeOrPatient == 1)

        {

            numPatients+=1;

            totalDC += person->patient.dailyCost;


		// Depending on which department the patient is in, add and increment variables
            switch(person->patient.department){

                case 1:

                    numPatients0 +=1;

                    totalDC0 += person->patient.dailyCost;

                    break;

                case 2:

                    numPatients1 +=1;

                    totalDC1 += person->patient.dailyCost;

                    break;

                case 3:

                    numPatients2 +=1;

                    totalDC2 += person->patient.dailyCost;

                    break;

                case 4:

                    numPatients3 +=1;

                    totalDC3 += person->patient.dailyCost;

                    break;

                case 5:

                    numPatients4 +=1;

                    totalDC4 += person->patient.dailyCost;

                    break;

                case 6:

                    numPatients5 +=1;

                    totalDC5 += person->patient.dailyCost;

                    break;

            }



        }

        person++;



    }
    // if the menu option 6 was chosen, print summary by department
if(case6 == 0){
        printf("Total number of patients: %3d total costs: %9.2f average daily costs: %7.2f\n", numPatients, totalDC, totalDC/numPatients);

        printf("Department[1] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients0,totalDC0,totalDC0/numPatients0);

        printf("Department[2] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients1,totalDC1,totalDC1/numPatients1);

        printf("Department[3] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients2,totalDC2,totalDC2/numPatients2);

        printf("Department[4] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients3,totalDC3,totalDC3/numPatients3);

        printf("Department[5] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients4,totalDC4,totalDC4/numPatients4);

        printf("Department[6] - patients: %3d total costs: %9.2f average daily costs: %7.2f\n",numPatients5,totalDC5,totalDC5/numPatients5);    


}
else{ // if it wasnt 6, then it was menu option 4, so just print summary of patients
printf("Total number of patients: %3d total costs: %9.2f average daily costs: %7.2f\n", numPatients, totalDC, totalDC/numPatients);
}
}



/********************************************************************/

void searchPatients(PersonRec *person, int numRecords)



{
// getting input from user
    char fName[16] = "";

    printf("Enter family name: \n");

    scanf("%s", fName);
// Iterating through people to compare family name of person to users inputted string
    for (int i = 0; i < numRecords; i++)

    {

        if (person->emplyeeOrPatient == 1)

        {

            if (strcmp(fName,person->familyName) == 0) // If they are equal, then display their patient data

            {

                printPatient(*person);

            }

        }

        person++;

    }

}
