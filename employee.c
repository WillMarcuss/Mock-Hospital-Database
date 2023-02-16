#include "employee.h"

#include "stdio.h"



// ADD DOCUMENTATION

//

void printEmployee(PersonRec person)



{
	// Formatting and printing each employee passed into function
    char name[33];

    sprintf(name, "%s %s", person.firstName, person.familyName);

    printf("%-20s ", name);

    printf("dept: %2d ", person.emp.department);

    printf("salary: %10.2f ", person.emp.salary);

    printf("position: %2d ", person.emp.position);

    printf("years of service: %4d ", person.emp.yearsService);

    printf("salary to date: %12.2f\n", (person.emp.salary) * (person.emp.yearsService));

}



void printEmployees(PersonRec *person, int numRecords)

{
	// Iterating through every person, and if they are an employee, print them 
    printf("\nEmployees:\n");

    for (int i = 0; i < numRecords; i++)

    {

        if (person->emplyeeOrPatient == 0)

        {

            printEmployee(*person);

        }

        person++;

    }

}



void printEmployeesSummary(PersonRec *person, int numRecords)

{
	// Initializing each position related variables
    int counter = 0;

    float totalSal = 0;

    int counter0 = 0;

    float totalSal0= 0;

    int counter1= 0;

    float totalSal1= 0;

    int counter2= 0;

    float totalSal2= 0;

    int counter3= 0;

    float totalSal3= 0;
    
    //Iterating through each person, and collecting amount in each position, and cumulating their total salary

    for (int i = 0; i < numRecords; i++)

    {

        if (person->emplyeeOrPatient == 0)

        {

            counter += 1;

            totalSal += person->emp.salary;


		// Depending on which position the employee is, increment their repsective variable and add the salary
            switch(person->emp.position){

                case 0:

                    counter0+=1;

                    totalSal0+= person->emp.salary;

                    break;

                case 1:

                    counter1+=1;

                    totalSal1+= person->emp.salary;

                    break;

                case 2:

                    counter2+=1;

                    totalSal2+= person->emp.salary;

                    break;

                case 3:

                    counter3+=1;

                    totalSal3+= person->emp.salary;

                    break;

            }



        }

        person++;

    }
//Printing all the data
    float sum = totalSal / counter;

    printf("Total number of employees: %3d total salary: %9.2f average salary: %7.2f\n", counter, totalSal, sum);

    printf("Position[0] - employees: %3d total salary: %10.2f average salary: %8.2f\n", counter0, totalSal0, totalSal0/counter0);

    printf("Position[1] - employees: %3d total salary: %10.2f average salary: %8.2f\n", counter1, totalSal1, totalSal1/counter1);

    printf("Position[2] - employees: %3d total salary: %10.2f average salary: %8.2f\n", counter2, totalSal2, totalSal2/counter2);

    printf("Position[3] - employees: %3d total salary: %10.2f average salary: %8.2f\n", counter3, totalSal3, totalSal3/counter3);

}
