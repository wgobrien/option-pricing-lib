/*
 * EuropeanOption.hpp
 *
 * Header file for European option pricing program.
 */
#ifndef __EUROPEANOPTION_H
#define __EUROPEANOPTION_H

#include <string>

class EuropeanOption
{
    private:

	double r;    // Interest rate
	double sig;  // Volatility
	double K;    // Strike price
	double T;    // Time to maturity
	double S;    // Underlying asset price
	double b;    // Cost of carry

        std::string type; // Option name (call, put)

	double CallPrice() const;
	double PutPrice() const;

    public:

        void set_params(double r, double sig, double K,  double T, double S, double b);

        // Functions that calculate option price and (some) sensitivitiesx
	double price() const;

        // Modifier functions
	void toggle();

        EuropeanOption(std::string t) {
	    type = t;
	}
};

#endif
