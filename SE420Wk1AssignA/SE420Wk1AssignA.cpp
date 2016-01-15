// SE420Wk1AssignA.cpp : Defines the exported functions for the DLL application.
//

//includes all of the neccasary headers to use the class we defined
#include "stdafx.h"
#include "Wk1AssignA.h"
#include <stdexcept>

//Allows use to exlude std:: from all of the basic commands like cout, keeps code clutter free
using namespace std;

//begin main method
namespace MathFuncs {

	//The methods defined in the header are given their functionality and return values
	//When these functions are called in the app the values given will be sent here for calculation and returned to the app.
	double MyMathFuncs::Add(double a, double b) {
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b) {
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b) {
		return a*b;
	}

	double MyMathFuncs::Divide(double a, double b) {
		//Check for divide by 0 error, send informative error if 0
		if (b == 0) {
			throw invalid_argument("cannot divide by 0! b must be nonzero number.");
		}
		return a / b;
	}
}