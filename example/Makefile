#
# Makefile for aapl options pricing test
#

CC = g++
CXX = g++
INCLUDES = -I../lib
CFLAGS = -g -Wall
CXXFLAGS = -std=c++17 -Wall -g $(INCLUDES)
LDFLAGS = -g -L../lib
LIBS = -loption

EXECS = aapl

.PHONY: default
default: $(EXECS)

aapl: aapl.o

.PHONY: clean
clean:
	rm -f *.o a.out core $(EXECS)

.PHONY: all
all: clean run

.PHONY: run
run: default
	./aapl
