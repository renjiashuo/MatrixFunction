#pragma once

#include <stdlib.h>
#include "vector_test.cpp"// 一、C++向量类模板（支持实数向量与复数向量的各种运算）
#include "matrix_test.cpp"// 二、C++矩阵类模板（支持实数矩阵与复数矩阵的各种运算）
#include "vectormath_test.cpp"// 三、常用数学函数向量版本的C++实现
#include "matrixmath_test.cpp"// 四、常用数学函数矩阵版本的C++实现
#include "cholesky_test.cpp"// 五、实数矩阵Cholesky分解算法的C++实现
#include "ccholesky_test.cpp"// 六、复数矩阵Cholesky分解算法的C++实现
#include "lud_test.cpp"// 七、实数矩阵与复数矩阵LU分解算法的C++实现
#include "qrd_test.cpp"// 八、实数矩阵QR分解算法的C++实现
#include "cqrd_test.cpp"// 九、复数矩阵QR分解算法的C++实现
#include "svd_test.cpp"// 十、实数矩阵SVD分解算法的C++实现
#include "csvd_test.cpp"// 十一、复数矩阵SVD分解算法的C++实现
#include "evd_test.cpp"// 十二、实数矩阵特征值分解算法C++实现
#include "cevd_test.cpp"// 十三、复数矩阵特征值分解算法的C++实现
#include "inverse_test.cpp"// 十四、各种实数矩阵与复数矩阵求逆算法的C++实现
#include "pseudoinverse_test.cpp"// 十五、实数矩阵与复数矩阵伪逆算法的C++实现
#include "linequs1_test.cpp"// 十六、各种线性方程组求解算法C++实现（支持复系数方程组）
#include "linequs2_test.cpp"// 十七、最小二乘解与极小范数解算法的C++实现（支持复系数方程组）
#include "linequs3_test.cpp"// 十八、病态方程组求解方法的C++实现（支持复系数方程组）
#include "nleroot_test.cpp"// 十九、非线性方程求根算法的C++实现
#include "nleroots_test.cpp"// 二十、非线性方程组求解算法的C++实现
#include "integral_test.cpp"// 二十一、Romberg数值积分算法的C++实现
#include "newtoninterp_test.cpp"// 二十二、Newton插值算法的C++实现
#include "spline3interp_test.cpp"// 二十三、三次样条插值算法的C++实现
#include "lsfit_test.cpp"// 二十四、最小二乘曲线拟合算法的C++实现
#include "steepdesc_test.cpp"// 二十五、最速下降优化算法的C++实现
#include "conjgrad_test.cpp"// 二十六、共轭梯度优化算法的C++实现
#include "utilities_test.cpp"// 二十七、信号处理算法中常用辅助函数的C++实现
#include "fft_test.cpp"// 二十八、类似Matlab中FFT函数调用形式的C++实现
#include "fftmr_test.cpp"// 二十九、2的整次幂长度FFT算法的C++实现
#include "fftpf_test.cpp"// 三十、任意长度FFT算法的C++实现
#include "bfgs_test.cpp"// 三十一、BFGS优化算法的C++实现

int linequs1_test();

int main()
{
	vector_test();// 一、C++向量类模板（支持实数向量与复数向量的各种运算）
	system("pause");
	matrix_test();// 二、C++矩阵类模板（支持实数矩阵与复数矩阵的各种运算）
	system("pause");
	vectormath_test();// 三、常用数学函数向量版本的C++实现
	system("pause");
	matrixmath_test();// 四、常用数学函数矩阵版本的C++实现
	system("pause");
	cholesky_test();// 五、实数矩阵Cholesky分解算法的C++实现
	system("pause");
	ccholesky_test();// 六、复数矩阵Cholesky分解算法的C++实现
	system("pause");
	lud_test();// 七、实数矩阵与复数矩阵LU分解算法的C++实现
	system("pause");
	qrd_test();// 八、实数矩阵QR分解算法的C++实现
	system("pause");
	cqrd_test();// 九、复数矩阵QR分解算法的C++实现
	system("pause");
	svd_test();// 十、实数矩阵SVD分解算法的C++实现
	system("pause");
	csvd_test();// 十一、复数矩阵SVD分解算法的C++实现
	system("pause");
	evd_test();// 十二、实数矩阵特征值分解算法C++实现
	system("pause");
	cevd_test();// 十三、复数矩阵特征值分解算法的C++实现
	system("pause");
	inverse_test();// 十四、各种实数矩阵与复数矩阵求逆算法的C++实现
	system("pause");
	pseudoinverse_test();// 十五、实数矩阵与复数矩阵伪逆算法的C++实现
	system("pause");
	linequs1_test();// 十六、各种线性方程组求解算法C++实现（支持复系数方程组）
	system("pause");
	linequs2_test();// 十七、最小二乘解与极小范数解算法的C++实现（支持复系数方程组）
	system("pause");
	linequs3_test();// 十八、病态方程组求解方法的C++实现（支持复系数方程组）
	system("pause");
	nleroot_test();// 十九、非线性方程求根算法的C++实现
	system("pause");
	nleroots_test();// 二十、非线性方程组求解算法的C++实现
	system("pause");
	integral_test();// 二十一、Romberg数值积分算法的C++实现
	system("pause");
	newtoninterp_test();// 二十二、Newton插值算法的C++实现
	system("pause");
	spline3interp_test();// 二十三、三次样条插值算法的C++实现
	system("pause");
	lsfit_test();// 二十四、最小二乘曲线拟合算法的C++实现
	system("pause");
	steepdesc_test();// 二十五、最速下降优化算法的C++实现
	system("pause");
	conjgrad_test();// 二十六、共轭梯度优化算法的C++实现
	system("pause");
	utilities_test();// 二十七、信号处理算法中常用辅助函数的C++实现
	system("pause");
	fft_test();// 二十八、类似Matlab中FFT函数调用形式的C++实现
	system("pause");
	fftmr_test();// 二十九、2的整次幂长度FFT算法的C++实现
	system("pause");
	system("pause");
	fftpf_test();// 三十、任意长度FFT算法的C++实现
	system("pause");
	bfgs_test();// 三十一、BFGS优化算法的C++实现
	system("pause");

	return 0;
}