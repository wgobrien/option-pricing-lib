#include <cmath>
#include "EuropeanOption.h"

void EuropeanOption::init(int type, double r, double sig, double K,  double T, double S, double b)
{
    // initialize values
    this->r = r;
    this->sig = sig;
    this->K = K;
    this->T = T;
    this->S = S;
    this->b = b;

    this->type = type;
}

double normCDF(double x)
{
    // approximate normal cdf distribution
    return 0.5 * erfc(-x * M_SQRT1_2);
}

double EuropeanOption::callPrice() const
{
    // European call option price
    double tmp = sig * sqrt(T);
    double d1 = ( log(S/K) + (b + sig*sig)*.5 * T ) / tmp;
    double d2 = d1 - tmp;

    return (S * exp((b-r) * T) * normCDF(-d1)) - (K * exp(-r * T) * normCDF(d2));
}

double EuropeanOption::putPrice() const
{
    // European put option price
    double tmp = sig * sqrt(T);
    double d1 = ( log(S/K) + (b + sig*sig)*.5 * T ) / tmp;
    double d2 = d1 - tmp;

    return (K * exp(-r * T) * normCDF(-d2)) - (S * exp((b-r)*T) * normCDF(-d1));
}

double EuropeanOption::price() const
{
    if(type == 1) {
        return callPrice();
    }
    else{
        return putPrice();
    }
}

void EuropeanOption::toggle()
{
    if(type == 1) {
        type = 0;
    }
    else {
        type = 1;
    }
}
