/*
 * aapl.cpp
 * example for how to use liboptions
 */

#include <iostream>
#include "option.hpp"

int main()
{
    std::cout << "what?" << std::endl;
    // initialize as a call or put
    EuropeanOption aapl = EuropeanOption("P");
    // r, sig, K, T, S, b
    std::cout << norm_CDF(.1) << std::endl;
    //aapl.set_params(.1, .28, 19, .75, 19, .1);
    //cout << aapl.price() << endl;
    return 0;
}
