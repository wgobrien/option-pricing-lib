#include <iostream>
#include "option.hpp"

int main()
{
    using namespace std;

    EuropeanOption option = EuropeanOption("C");
    option.set_params(.1, .28, 19, .75, 19, 0);
    cout << "Call option on a stock: " << option.price() << endl;
    option.toggle();
    cout << "Put price on a stock: " << option.price() << endl;

    return 0;
}
