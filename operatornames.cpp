#include "stdafx.h"
#include "chooseoperator.h"
#include "checkoperator.h"
#include <iostream>

int operatorOne()
{
	std::cout << "You selected" << " + " << "as operator" << std::endl;
	return 0;
}

int operatorTwo()
{
	std::cout << "You selected" << " - " << "as operator" << std::endl;
	return 0;
}

int operatorThree()
{
	std::cout << "You selected" << " * " << "as operator" << std::endl;
	return 0;
}

int operatorFour()
{
	std::cout << "You selected" << " / " << "as operator" << std::endl;
	return 0;
}

int operatorError()
{
	std::cout << "ERROR: Select an value for operator between 1 and 4. Restart the program and try again." << std::endl;
	return 0;
}
