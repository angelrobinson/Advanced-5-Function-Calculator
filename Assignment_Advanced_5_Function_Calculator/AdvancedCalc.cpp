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

// PreProcessor Directives
#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <new>

using namespace std;

//functions

//show menu, get and return choice
int menu()
{
	int input;

	cout << std::string(50, '#') << endl;
	cout << "#\t What would you like to do today?\t #\n";
	cout << "#\t 1. Addition\t\t\t\t #\n";
	cout << "#\t 2. Subtraction\t\t\t\t #\n";
	cout << "#\t 3. Multiplication\t\t\t #\n";
	cout << "#\t 4. Division\t\t\t\t #\n";
	cout << "#\t 5. Exit\t\t\t\t #\n";
	cout << std::string(50, '#') << endl;
	cout << "\nPlease enter your choice: ";
	cin >> input;

	return input;
};

//get user input and return the input
double getNumber()
{
	double num;
	cout << "\nEnter a number: ";
	cin >> num;
	cin.ignore(); //clear buffer
	return num;
};

//show results of the calculation
void showResults(double& num1, double& num2, double *result)
{
	//corresponding symbol depending on which index the result is in
	char symbols[4] = { '+', '-', '*','/' };

	for (int index = 0; index < 4; index++)
	{
		if (result[index] < 0)
		{
			//if the result element shows a default negative real number, continue to next element
			continue;
		}
		else
		{
			//if the result element is a positive real number, then display the results
			cout << setw(6)
				<< setiosflags(ios::fixed | ios::right)
				<< setprecision(2)
				<< num1 << " "
				<< symbols[index]
				<< num2 << " = "
				<< result[index] << endl;
		}

	}

	//clear the results array
	delete[] result;


};

double * calc(double *num1, double *num2, int *choice)
{
	//recreate the results array so that each element returns to the default negative real number
	double *results = new double[4];

	//based on choice from menu, calculate the results and save in the results array
	switch (*choice)
	{
	case 2:
		//subtraction
		results[1] = *num1 - *num2;
		break;
	case 3:
		//multiplication
		results[2] = *num1 * *num2;
		break;
	case 4:
		//division
		results[3] = *num1 / *num2;
		break;
	default:
		//addition
		results[0] = *num1 + *num2;
		break;
	}

	//return the results array
	return results;
}