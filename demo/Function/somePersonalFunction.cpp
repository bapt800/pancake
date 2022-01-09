#include "somePersonalFunction.h"
//hello, here we have def of fx


//the return type is the one specified before the function name: int here
int someCalc(int x, int y)
{
	int w{ 8 }; //init new integer var
	w += x; //add x to w
	return w * y; //multiply w by y, and return it
}

int CastNeeded(int var) //just return the param
{
	return var;
}

float DoACast(int var)
{
	float b{ 1.3f };
	return static_cast<float>(var) + b;
}
