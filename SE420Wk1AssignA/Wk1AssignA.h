#pragma once
//Wk1AssignA.h

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif

namespace MathFuncs
{
	//This class is exported from the MathFuncsDLL.dll
	class MyMathFuncs
	{
	public:
		//returns a+b
		static MATHFUNCSDLL_API double Add(double a, double b);

		//returns a-b
		static MATHFUNCSDLL_API double Subtract(double a, double b);

		//returns a*b
		static MATHFUNCSDLL_API double Multiply(double a, double b);
		
		//returns a/b
		//THrows const std::invalid_arguement if b is 0
		static MATHFUNCSDLL_API double Divide(double a, double b);
	};
}
//This class defines the basic arithmetic functions for the MATHFUNCSDLL object, enabling us to keep the main method free of this clutter and use the object over and over again in multiple .cpp files
//The actual method functionality is not defined here, that will be in the .cpp file