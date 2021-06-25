/*
 * EuropeanOption.h
 *
 * Header file for European option pricing program.
 */
#ifndef __EUROPEAN_OPTION_H
#define __EUROPEAN_OPTION_H

class EuropeanOption
{
    private:

	double r;    // Interest rate
	double sig;  // Volatility
	double K;    // Strike price
	double T;    // Time to maturity
	double S;    // Underlying asset price
	double b;    // Cost of carry

        int type; // Option name (call, put)

	double callPrice() const;
	double putPrice() const;

    public:

        void init(int type, double r, double sig, double K,  double T, double S, double b);

        //EuropeanOption() {}

        // Functions that calculate option price and (some) sensitivities
	double price() const;

        // Modifier functions
	void toggle();
};

#endif
