#include "stdafx.h"
#include "chooseoperator.h"
#include "operatornames.h"

int checkOperator(int submittedOperator)
{
	if (submittedOperator == 1)
		return operatorOne();
	if (submittedOperator == 2)
		return operatorTwo();
	if (submittedOperator == 3)
		return operatorThree();
	if (submittedOperator == 4)
		return operatorFour();
	if (submittedOperator > 4)
		return operatorError();

	return 0;
}
