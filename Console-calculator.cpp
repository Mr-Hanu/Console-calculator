#include "stdafx.h"
#include "operatornames.h"
#include "chooseoperator.h"
#include "checkoperator.h"
#include <iostream>

int submitNumber()
{
	std::cout << "Please submit a number: ";
	int numberOne;
	std::cin >> numberOne;
	return numberOne;
}

int calculateResult(int value, int operatorPick, int valueTwo)
{
	if (operatorPick == 1)
		return value + valueTwo;
	if (operatorPick == 2)
		return value - valueTwo;
	if (operatorPick == 3)
		return value * valueTwo;
	if (operatorPick == 4)
		return value / valueTwo;

	return 0;
}

void printResult(int result)
{
	std::cout << "The result is: " << result << std::endl;
}

int main()
{
	int firstValue = submitNumber();
	int chosenOperator = chooseOperator();
	int operatorCheck = checkOperator(chosenOperator);
	int secondValue = submitNumber();
	int calculate = calculateResult(firstValue, chosenOperator, secondValue);
	printResult(calculate);
	
	return 0;
}

