CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)

INCPATH       = -I../../include/common

SRCS = ../../src/common/vector.cpp 
OBJS = $(addprefix ../../obj/,$(notdir $(SRCS:.cpp=.o)))

all: makedir common

print: 
	echo $(OBJS)
	echo $(SRCS)

../../obj/%.o: $(SRCS)
	$(CXX) -c $(CFLAGS) $(INCPATH) $(CPPFLAGS) $< -o $@

common: $(OBJS)
	$(CXX) $(LDFLAGS) -o common $(OBJS) $(LDLIBS)

makedir:
	mkdir -p ../../obj





#depend: .depend

#.depend: $(SRCS)
#rm -f ./.depend
#$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

#dist-clean: clean
#$(RM) *~ .dependtool

#include .depend