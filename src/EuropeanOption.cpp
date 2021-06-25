#include <cmath>
#include <iostream>
#include "EuropeanOption.hpp"

using namespace std;

void EuropeanOption::set_params(double r, double sig, double K,  double T, double S, double b)
{
    // initialize values
    this->r = r;
    this->sig = sig;
    this->K = K;
    this->T = T;
    this->S = S;
    this->b = b;
}

double norm_CDF(double x)
{
    // approximate normal cdf distribution
    return 0.5 * erfc(-x * M_SQRT1_2);
}

double EuropeanOption::CallPrice() const
{
    // European call option price
    double tmp = sig * sqrt(T);
    double d1 = ( log(S/K) + (b + sig*sig)*.5 * T ) / tmp;
    double d2 = d1 - tmp;

    return (S * exp((b-r) * T) * norm_CDF(-d1)) - (K * exp(-r * T) * norm_CDF(d2));
}

double EuropeanOption::PutPrice() const
{
    // European put option price
    double tmp = sig * sqrt(T);
    double d1 = ( log(S/K) + (b + sig*sig)*.5 * T ) / tmp;
    double d2 = d1 - tmp;

    return (K * exp(-r * T) * norm_CDF(-d2)) - (S * exp((b-r)*T) * norm_CDF(-d1));
}

double EuropeanOption::price() const
{
    if(type == "C") {
        return CallPrice();
    }
    else{
        return PutPrice();
    }
}

void EuropeanOption::toggle()
{
    if(type == "C") {
        this->type = "P";
    }
    else {
        this->type = "C";
    }
}
