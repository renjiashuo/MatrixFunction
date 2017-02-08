/*****************************************************************************
*                               fft_test.cpp
*
* FFT test.
* 类似Matlab中FFT函数调用形式的C++实现
* Zhang Ming, 2010-09, Xi'an Jiaotong University.
*****************************************************************************/

#pragma once

#include <iostream>
#include <cstdlib>
#include "vectormath.h"
#include "fft.h"


using namespace std;
using namespace splab;





int fft_test()
{
	typedef double  Type;
	const   int     MINLEN = 1;
	const   int     MAXLEN = 1000;
	const   int     STEP = 10;

	Vector< complex<Type> >  sn, Rk, Sk, xn;
	Vector<Type> rn, tn;

	cout << "forward transform: complex to complex." << endl;
	cout << "inverse transform: complex to complex." << endl << endl;
	cout << "signal length" << "\t" << "mean(abs((sn-xn))" << endl;
	for (int len = MINLEN; len<MAXLEN; len += STEP)
	{
		sn.resize(len);
		for (int i = 0; i<len; ++i)
			sn[i] = complex<Type>(rand() % 10, rand() % 10);

		Sk = fftc2c(sn);
		xn = ifftc2c(Sk);
		//        Sk = fft( sn );
		//        xn = ifft( Sk );
		cout << "    " << len << "\t\t" << "  " << sum(abs(sn - xn)) / len << endl;
	}
	cout << endl << endl;

	cout << "forward transform: real to complex ." << endl;
	cout << "inverse transform: complex to real." << endl << endl;
	cout << "signal length" << "\t" << "mean(abs((rn-tn))" << endl;
	for (int len = MINLEN; len<MAXLEN; len += STEP)
	{
		rn.resize(len);
		for (int i = 0; i<len; ++i)
			rn[i] = rand() % 10;

		Rk = fftr2c(rn);
		tn = ifftc2r(Rk);
		//        Rk = fft( rn );
		//        tn = real( ifft(Rk) );
		cout << "    " << len << "\t\t" << "  " << sum(abs(rn - tn)) / len << endl;
	}
	cout << endl;

	return 0;
}