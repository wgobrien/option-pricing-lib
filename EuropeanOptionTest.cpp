#include <iostream>
//using std::cout;
#include "EuropeanOption.h"

int main()
{
    EuropeanOption option = EuropeanOption();
    option.init(0, .1, .28, 19, .75, 19, 0);
    printf("%f", option.price());
    option.toggle();
    printf("\n%f", option.price());
    //std::cout << "Call option on a stock: " << option.price();

    return 0;
}
