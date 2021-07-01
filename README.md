# option-pricing-lib
Learning C++ by building a library to price options.

## usage
Run `make` in `\lib` to build the static library.

Running `make run` will build the static library and test it with an executeable.

`\example` shows how to use the library for an external project.

## example

So far, the library only supports the pricing of European call and put options using the Black-Scholes Merton (BSM) model (need to start somewhere).

You can price an option by declaring and initializing as follows:

`EuropeanOption o = EuropeanOption("C")` makes a call option.

Set the parameters using `o.set_params(interest_rate, volatility, strike_price, time_expire, underlying_asset_price, cost_carry)`

Note: cost_carry = interest rate - dividend in this implementation.

Calculate price using `o.price()`

Switch to a put option using `o.toggle`

## notes

Plan on adding calculation of the Greeks, other methods of options pricing, other types of options, maybe other derivatives if I'm interested
