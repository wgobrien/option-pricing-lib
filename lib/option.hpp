/*
 * option.hpp
 *
 * Header file for option pricing program.
 */
#ifndef __OPTION_H
#define __OPTION_H

double norm_CDF(double x);

class EuropeanOption
{
    private:

	double r;    // risk-free interest rate
	double sig;  // Volatility
	double K;    // Strike price
	double T;    // Time to maturity
	double S;    // Underlying price
	double b;    // Cost of carry = r - div

        double d1;
        double d2;
        std::string type; // Option name (call, put)

	double CallPrice() const;
	double PutPrice() const;

    public:

        void set_params(double r, double sig, double K,  double T, double S, double b);

	double price() const;

        // switch between call and put
	void toggle();

        // constructor and destructor
        EuropeanOption(std::string t) : type("C") { type = t; }
        virtual ~EuropeanOption() {}
};

#endif
