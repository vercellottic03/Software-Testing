// Wk1AssignAApp.cpp : Defines the entry point for the console application.
//

//include the header file defining all of the arithmetic functions. Gives us access to everything we need
#include <iostream>
#include "stdafx.h"
#include "Wk1AssignA.h"

using namespace std;

int main()
{
	//define varibales to calculate
	double a = 7.4;
	int b = 99;

	//run the addition function of the MyMathFuncs object
	cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a, b) << endl;
	//run the subtraction function
	cout << "a - b = " <<
		MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
	//run the multiplication function
	cout << "a * b = " <<
		MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	//run the division function
	cout << "a / b = " <<
		MathFuncs::MyMathFuncs::Divide(a, b) << endl;

	//attempt to divide by 0 and make sure that the function is catching and throwing the correct error
	try
	{
		cout << "a / 0 = " <<
			MathFuncs::MyMathFuncs::Divide(a, 0) << endl;
	}
	catch (const invalid_argument &e)
	{
		//output exception
		cout << "Caught exception: " << e.what() << endl;
	}

	//User input for the two numbers than added together
	int var1;
	int var2;
	cout << "Enter in a number to use in an  addition equation: ";
	cin >> var1;
	cout << "Enter the second number to add: ";
	cin >> var2;
	cout << var1 << " + " << var2 << " = " << var1 + var2 << endl;
}
//This function tests all of the object defenitions we described in the DLL, including testing the divide by 0 error

