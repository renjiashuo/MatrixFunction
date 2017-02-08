/*****************************************************************************
*                               nleroots_test.cpp
*
* Rooting of nonlinear equations testing.
* 非线性方程组求解算法的C++实现
* Zhang Ming, 2010-10, Xi'an Jiaotong University.
*****************************************************************************/

#pragma once

#include <iostream>
#include <iomanip>
#include "nleroots.h"


using namespace std;
using namespace splab;





int nleroots_test()
{
	typedef double  Type;
	const   int     N = 2;

	Vector<Type> X0(N);
	cout << setiosflags(ios::fixed) << setprecision(8);

	NLEqus<Type> G;
	X0(1) = 0;  X0(2) = 1;
	cout << "Seidel iteration method :   " << seidel(G, X0) << endl;

	NLFuncs<Type> F;
	X0(1) = 2;  X0(2) = 0;
	cout << "Newton iteration method :   " << newton(F, X0) << endl;

	return 0;
}