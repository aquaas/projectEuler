## Makefile for Project Euler C++ Files
# source files located in 	src/
# header files located in 	include/
# libraries located in 		libs/

# makefile example call: 'make N=pe001' compiles project with name pe001


CC = gcc # C compiler

CPP = g++ # C++ compiler

RM = rm -f	# remove command

LIBS 		= -lprimesieve -larmadillo	#used libraries

LIBSDIR		= libs/ #directory for libraries

INCLUDES	= include/ #directory for header files

CPPFLAGS  	= -g -Wall -O2 	-std=c++11 # c++ compiler flags

LDFLAGS 	= -g -Wall -O2 -std=c++11 -Wl,-rpath=$(LIBSDIR) # linker flags

A001 = pe001
S001 = ps001

SRC 	= $(wildcard src/*.cpp) #source files associated with program

OUT   = $(wildcard *.out)

#OBJ 	= $(patsubst %.cpp,%.o,$(SRC)) # corresponding object files for .cpp files
OBJ		:= $(addprefix obj/,$(notdir $(SRC:.cpp=.o)))

obj/%.o: src/%.cpp
	$(CPP) -c -I $(INCLUDES) $(CPPFLAGS) -o $@ $<

%:
	$(CPP) -I $(INCLUDES) -L $(LIBSDIR) $(LDFLAGS) -o $*.out src/$*.cpp $(LIBS)

$(A001): obj/$(A001).o
	$(CPP) -L $(LIBSDIR) $(LDFLAGS) -o $@.out $? $(LIBS)

clean:
	$(RM) $(OBJ)

clean-dist:
	$(RM) $(OUT)

#all: program1 program2

#program1: program1.c
#program2: program2.c

#g++ -L /home/achim/cpp/projectEuler/libs/primesieve/ -Wl,-rpath=/home/achim/cpp/projectEuler/libs/#primesieve/ -Wall -o pe001 pe001.cpp -lprimesieve





#$(CPP) -c -I $(INCLUDES) $(CPPFLAGS) -o $@ $(SRC) $<
