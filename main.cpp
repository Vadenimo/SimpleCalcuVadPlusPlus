#include <iostream>
#include "operations.h"

/*
This is an attempt to remake my own calculator software. It's a simple calculator that can perform basic arithmetic operations.
These operations include addition, subtraction, multiplication, and division. The calculator will take two numbers as input and perform the selected operation on them. 
These results will be displayed to the user.
*/

int main()
{
	// defines the two numbers that will be used in this calculator program. This program uses float numbers to allow for decimal values.
	float numberOne{};
	float numberTwo{};

	// welcome message to the user :3
	std::cout << "Welcome to 'SimpleCalcVad++'! A simple calculator that can perform basic arithmetic operations on two float numbers.\nIt's a remake project of my first simple calculator I made in 2024!\nCopyright (c) 2024 - 2026 Vadenimo. All rights reserved.\n\n";
	
	// checks if the user input is a number or not. If the user inputs a non-number, the program will terminate and display an error message.
	std::cout << "Please enter the first number: ";
	std::cin >> numberOne;
	
	// checks if the user input is a number or not. If the user inputs a non-number, the program will terminate and display an error message.
	if (std::cin.fail())
	{
		std::cout << "You funny silly! You cannot enter any inputs other than numbers! Please try again... c:\n";
		return 1;
	}
	
	// same as above, but for the second number. This is to ensure that the user inputs a valid number for both inputs.
	std::cout << "Please enter the second number: ";
	std::cin >> numberTwo;
	
	// checks if the user input is a number or not. If the user inputs a non-number, the program will terminate and display an error message.
	if (std::cin.fail())
	{
		std::cout << "Woaw, despite your efforts on your first attempt, you still failed to enter a second valid number!\nMaybe you should learn how to type numbers correctly. Please try again... =w=\n";
		return 1;
	}

	// defines the operation that will be used in this calculator program. 
	char mathOperation{};
	std::cout << "Please choose an arithmetic operation to perform (+, -, *, /): ";
	std::cin >> mathOperation;
	
	// cecks if the user input is a valid operation or not. If the user inputs an invalid operation, the program will terminate and display an error message.
	if (std::cin.fail() || (mathOperation != '+' && mathOperation != '-' && mathOperation != '*' && mathOperation != '/'))
	{
		std::cout << "\nHello I am this program. You made me sad because now I'll be terminated due to your stupidity.\nYou killed an innocent program. I hope you'll understand the consequences of your actions. Farewell...\n\n";
		std::cout << "ERROR 404: Invalid operation. This program will be terminated. :3\n";
		return 1;
	}

	// performs the selected operation on the two numbers and displays the result to the user.
	switch (mathOperation)
	{
	case '+':
		std::cout << "\nThe result of " << numberOne << " + " << numberTwo << " is: " << addition(numberOne, numberTwo) << "\n\n";
		break;
	case '-':
		std::cout << "\nThe result of " << numberOne << " - " << numberTwo << " is: " << subtraction(numberOne, numberTwo) << "\n\n";
		break;
	case '*':
		std::cout << "\nThe result of " << numberOne << " * " << numberTwo << " is: " << multiplication(numberOne, numberTwo) << "\n\n";
		break;
	case '/':
		std::cout << "\nThe result of " << numberOne << " / " << numberTwo << " is: " << division(numberOne, numberTwo) << "\n\n";
		break;
	}
	std::cout << "Thanks for using 'SimpleCalcVad++'! It's been so much fun to program this program! I know, it's very simple.\nHowever, it's my work, of which I am proud of! If you like my work, please consider supporting me! :3\n\nMy E-Mail adress: vadim.vadenimo@gmail.com\nMy Discord username: '@vadenimo'.\nMy BlueSky username: '@vadenimo.bsky.social'.\n\n";
	std::cout << "'I wanna burn; Burn a candle you can see; The kinda flame; I need you to believe;\n - Ken Blast alias Jessa Stebbins, WHEN THE SUN GOES DOWN, 2010\n";
}