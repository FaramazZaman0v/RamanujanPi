#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iomanip>
 
using cpp_dec_float_50 = boost::multiprecision::cpp_dec_float_50;

cpp_dec_float_50 factorial(int n)
{
	cpp_dec_float_50 res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }
    return res;
}

int main()
{
	cpp_dec_float_50 rPi = 0;
    cpp_dec_float_50 sqrt_2 = (cpp_dec_float_50)sqrt(2);
    
    for (int k = 0; k < 10; ++k)
    {
        cpp_dec_float_50 num = factorial(4 * k) * (26390 * k + 1103);
        cpp_dec_float_50 d = (cpp_dec_float_50)pow(factorial(k), 4) * (cpp_dec_float_50)pow(394, 4 * k);
        rPi += num / d;
    }

    rPi = (2 * sqrt_2 / 9801) * rPi;

    std::cout << std::setprecision(50) <<  rPi << std::endl;

    return 0;
}
//0.31830988634221667675882213643676257433653884586987
