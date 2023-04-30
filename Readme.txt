1. Purpose of software:

The purpose of this program is to allow the user to access and traverse through a 		 	hospital database. This is done by prompting the user to choose from 6 options: print all employees and patients, search patient by family name, summary of employees data, summary of patients data, size of structures, and quit. The user will be able to continuously traverse this database until they quit the program. 

2. Developers and develop date:

Developer: William Marcus
Date: Friday, November 4th 2022

3. Organization:

This program is organized into seperate files for imporved readability. These seperate files are: hospital.c, which is where the main method is located, employee.c, which is where all the data related to employees are located, patient.c, which is where all the data related to employees are located, populateRecords.c, which is where the hospital records are located, and finally all the header files: struct.h, employee.h, patient.h, populateRecords.h.

4. How to compile:

This program is compiled using gcc, using the following line in the terminal:

gcc hospital.c patient.c employee.c populateRecords.c

then, after compiling, an out file named "a.out" will be created in whichever directory you are in. Next, to run the program use the following line, and add in a non-zero positive integer where 'x' is:

./a.out x

5. Limitaitons

This program accounts for invalid input, so if your input is invalid, you will either be re-prompted with the menu, or told your input is invalid, and instructed on how to proceed.

6. Instructions

After compiling and running the program shown on line 18 and 22, you will be prompted with a menu, now you are free to choose which option you would like to see. If you enter '1' you will be presented with a list of all the employees and patients seperately. if you enter '2' you will be prompted to search for a family name, to proceed, enter a family name and press enter, if there are patients with that last name, they will be displayed, if not, nothing will appear, and you will be reprompted with the menu. if you enter '3' you will be shown a summary of all the employee data, which includes the total number of employees, the total salaries, and the average salaries, and below will be each of these categories in each position respectively. If you enter '4' the summary of the patients data will be displayed. This includes the amount of patients, the total costs, and average daily costs. If you input '5' the size of the structures will be displayed. If you enter '6'(BONUS) you will be displayed the summary of patient data for each department respectively Finally if you input '0' you will be warned if you want to quit, and then giving a second chance to confirm. 
