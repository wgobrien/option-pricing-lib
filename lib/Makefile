#
# Makefile for options-pricing-lib
#

CXX ?= g++-8
CXXFLAGS = -std=c++17 -Wall -g
INCLUDES =

.PHONY: default
default: liboption.a

liboption.a: option.o
	@echo "building library"
	@ar ru liboption.a option.o
	@ranlib liboption.a

option.o: option.hpp

optionTest.o: option.hpp

runner: optionTest.o liboption.a
	@echo "building executeable"
	@$(CXX) -o runner optionTest.o liboption.a

.PHONY: run
run: default runner
	./runner

.PHONY: clean
clean:
	@echo "deleting binary files"
	@rm -f *.o a.out core liboption.a runner

.PHONY: all
all: clean run
