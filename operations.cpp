#include <iostream>
#include "operations.h"

float addition(float numberOne, float numberTwo)
{
	return numberOne + numberTwo;
}

float subtraction(float numberOne, float numberTwo)
{
	return numberOne - numberTwo;
}

float multiplication(float numberOne, float numberTwo)
{
	return numberOne * numberTwo;
}

float division(float numberOne, float numberTwo)
{
	if (numberOne == 0 || numberTwo == 0)
	{
		std::cout << "a mathematical error! :<\n\nYou silly! >w< You cannot divide by zero! :3 Step up your basic math skills and try again! c:\n";
		return 0;
	}
	else return numberOne / numberTwo;
}

