#include <iostream>
#include "EuropeanOption.hpp"

using namespace std;

int main()
{
    EuropeanOption option = EuropeanOption("C");
    option.set_params(.1, sig=.28, 19, .75, 19, 0);
    cout << "Call option on a stock: " << option.price() << endl;
    option.toggle();
    cout << "Put price on a stock: " << option.price() << endl;

    return 0;
}
