/*****************************************************************************
*                               integral_test.cpp
*
* Numerical integral testing.
* Romberg数值积分算法的C++实现
* Zhang Ming, 2010-04, Xi'an Jiaotong University.
*****************************************************************************/

#pragma once

#include <iostream>
#include "integral.h"


using namespace std;
using namespace splab;


typedef double  Type;


int integral_test()
{
	Type    p1 = 1,
		p2 = 2,
		lower = 0,
		upper = PI,
		I = 0;
	Func<Type> f(p1, p2);

	I = romberg(f, lower, upper);
	cout << "The integral of function 'f' from " << lower <<
		" to " << upper << " is :   " << I << endl << endl;

	return 0;
}