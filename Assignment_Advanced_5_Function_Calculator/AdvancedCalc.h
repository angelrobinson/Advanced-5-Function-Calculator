/********************
*Assignment:  Assignment_Advanced_5_Function_Calculator.cpp
*
*You must create a new 5 function calculator similar to the one you created in the
*"Functions" module. However, this program will use pointers and references in the
*functions rather than passing by value.
*The functions which perform the actual calculations should have pointers as parameters,
*while the display function should use references as parameters.
*This program must be done as a multiple file application,
*with the appropriate source and header files.
*
*For this project you must create a C++ project that will:
*Include separate functions to perform the following:
*--Prompt for user to enter a numeric value.  (this will be used twice.)
*--Prompt for user to enter the type of calculation. ( + - * / )
*--perform the calculation. (one each for addition, subtraction, multiplication, and division)
*--display the full results of the calculation. (see below for sample output.)
*This program also needs to include the ability to store, retrieve, and clear a value in memory.
*This program will use all double precision variables.
*All variables should be local to the functions they are needed in, and passed appropriately. (NO Globals!)
*The program should loop continuously until the user decides they are done.
*The program should then pause and wait for the user to press a key before closing.
*
*The final output should show the complete calculation:
*
*   Example:
*        12.4 + 5.32 = 17.72
*    Or:
*        3.0 * 2.5 = 7.5
*
*
*
* Author: Angela Robinson
* Date:   May 24, 2018
*
**********************/


//function prototypes
int menu(); //get the user choice
double getNumber();
double * calc(double *, double *, int *);
void showResults(double&, double&, double *); //show results
