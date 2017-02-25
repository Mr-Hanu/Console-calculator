#include "stdafx.h"
#include "operatornames.h"
#include <iostream>

int chooseOperator()
{
	std::cout << "Please select desired operator (1 = +, 2 = -, 3 = *, 4 = /): " ;   // if user selects 1, operator will be "+" etc
	int operatorGiven;
	std::cin >> operatorGiven;
	return operatorGiven;
}

