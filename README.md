# MatrixFunction
【非原创】【授权协议: MIT】C++矩阵计算相关函数源码。转载自http://my.oschina.net/zmjerry/blog

测试环境：visual studio 2013

一、C++向量类模板（支持实数向量与复数向量的各种运算）：

头文件：
usingdeclare.h、
constants.h、
vector.h。
实现文件：
vector-impl.h。
测试代码：
vector_test.cpp。

二、C++矩阵类模板（支持实数矩阵与复数矩阵的各种运算）：

头文件：
matrix.h。
实现文件：
matrix-impl.h。
测试代码：
matrix_test.cpp。

三、常用数学函数向量版本的C++实现：

头文件：
vectormath.h。
实现文件：
vectormath-impl.h。
测试代码：
vectormath_test.cpp。

四、常用数学函数矩阵版本的C++实现：

头文件：
matrixmath.h。
实现文件：
matrixmath-impl.h。
测试代码：
matrixmath_test.cpp。

五、实数矩阵Cholesky分解算法的C++实现：

头文件：
cholesky.h。
实现文件：
cholesky-impl.h。
测试代码：
cholesky_test.cpp。

六、复数矩阵Cholesky分解算法的C++实现：

头文件：
ccholesky.h。
实现文件：
ccholesky-impl.h。
测试代码：
ccholesky_test.cpp。

七、实数矩阵与复数矩阵LU分解算法的C++实现：

头文件：
lud.h。
实现文件：
lud-impl.h。
测试代码：
lud_test.cpp。

八、实数矩阵QR分解算法的C++实现

头文件：
qrd.h。
实现文件：
qrd-impl.h。
测试代码：
qrd_test.cpp。

九、复数矩阵QR分解算法的C++实现

头文件：
cqrd.h。
实现文件：
cqrd-impl.h。
测试代码：
cqrd_test.cpp。

十、实数矩阵SVD分解算法的C++实现

头文件：
svd.h。
实现文件：
svd-impl.h。
测试代码：
svd_test.cpp。

十一、复数矩阵SVD分解算法的C++实现

头文件：
csvd.h。
实现文件：
csvd-impl.h。
测试代码：
csvd_test.cpp。

十二、实数矩阵特征值分解算法C++实现

头文件：
evd.h。
实现文件：
evd-impl.h。
测试代码：
evd_test.cpp。

十三、复数矩阵特征值分解算法的C++实现

头文件：
cevd.h。
实现文件：
cevd-impl.h。
测试代码：
cevd_test.cpp。

十四、各种实数矩阵与复数矩阵求逆算法的C++实现

头文件：
inverse.h。
实现文件：
inverse-impl.h。
测试代码：
inverse_test.cpp。

十五、实数矩阵与复数矩阵伪逆算法的C++实现

头文件：
pseudoinverse.h。
实现文件：
pseudoinverse-impl.h。
测试代码：
pseudoinverse_test.cpp。

十六、各种线性方程组求解算法C++实现（支持复系数方程组）

头文件：
linequs.h。
实现文件：
linequs-impl.h。
测试代码：
linequs_test.cpp。

十七、最小二乘解与极小范数解算法的C++实现（支持复系数方程组）

头文件：
linequs2.h。
实现文件：
linequs2-impl.h。
测试代码：
linequs2_test.cpp。

十八、病态方程组求解方法的C++实现（支持复系数方程组）

头文件：
linequs3.h。
实现文件：
linequs3-impl.h。
测试代码：
linequs3_test.cpp。

十九、非线性方程求根算法的C++实现

头文件：
nlfunc.h、
nleroot.h。
实现文件：
nleroot-impl.h。
测试代码：
nleroot_test.cpp。

二十、非线性方程组求解算法的C++实现

头文件：
nlfuncs.h、
nleroots.h。
实现文件：
nleroots-impl.h。
测试代码：
nleroots_test.cpp。

二十一、Romberg数值积分算法的C++实现

头文件：
integrand.h、
integral.h。
实现文件：
integral-impl.h。
测试代码：
integral_test.cpp。

二十二、Newton插值算法的C++实现

头文件：
interpolation.h、
newtoninterp.h。
实现文件：
newtoninterp-impl.h。
测试代码：
newtoninterp_test.cpp。

二十三、三次样条插值算法的C++实现

头文件：
spline3interp.h。
实现文件：
spline3interp-impl.h。
测试代码：
spline3interp_test.cpp。

二十四、最小二乘曲线拟合算法的C++实现

头文件：
fitcurves.h、
lsfitting.h。
实现文件：
lsfitting-impl.h。
测试代码：
lsfit_test.cpp。

二十五、最速下降优化算法的C++实现

头文件：
objfunc.h、
linesearch.h、
steepdesc.h。
实现文件：
linesearch-impl.h、
steepdesc-impl.h。
测试代码：
steepdesc_test.cpp。

二十六、共轭梯度优化算法的C++实现

头文件：
conjgrad.h。
实现文件：
conjgrad-impl.h。
测试代码：
conjgrad_test.cpp。

二十七、信号处理算法中常用辅助函数的C++实现

头文件：
utilities.h。
实现文件：
utilities-impl.h。
测试代码：
utilities_test.cpp。

二十八、类似Matlab中FFT函数调用形式的C++实现

头文件：
fft.h。
实现文件：
fft-impl.h。
测试代码：
fft_test.cpp。

二十九、2的整次幂长度FFT算法的C++实现

头文件：
fftmr.h。
实现文件：
fftmr-impl.h。
测试代码：
fftmr_test.cpp。

三十、任意长度FFT算法的C++实现

头文件：
fftpf.h。
实现文件：
fftpf-impl.h。
测试代码：
fftpf_test.cpp。

三十一、BFGS优化算法的C++实现

头文件：
bfgs.h。
实现文件：
bfgs-impl.h。
测试代码：
bfgs_test.cpp。
