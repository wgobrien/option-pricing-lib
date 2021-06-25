#
# Makefile for options pricing
#

CXX = g++

INCLUDES =
CFLAGS   = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)

LDFLAGS =
LDLIBS = 

.PHONY: default
default: EuropeanOptionTest

EuropeanOptionTest: EuropeanOptionTest.o EuropeanOption.o

# header dependency

EuropeanOption.o: EuropeanOption.h

EuropeanOptionTest.o: EuropeanOption.h

.PHONY: clean
clean:
	rm -f *.o *~ a.out core EuropeanOptionTest

.PHONY: all
all: clean default
