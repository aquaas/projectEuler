## Makefile for Project Euler C++ Files
# source files located in 	src/
# header files located in 	include/
# libraries located in 		libs/

# makefile example call: 'make N=pe001' compiles project with name pe001


CC = g++ 	# C compiler
CPP = g++	# C++ compiler

RM = rm -f	# remove command



LIBS 		= -lprimesieve	#used libraries

LIBSDIR		=    libs/		#directory for libraries
INCLUDES	= 	 include/	#directory for header files

CPPFLAGS  	= -g -Wall -O2 	-std=c++11						# c++ compiler flags
LDFLAGS 	= -g -Wall -std=c++11 -Wl,-rpath=$(LIBSDIR)		# linker flags


MAIN 	= $(N).out				# name of program

SRC 	= src/$(N).cpp		#source files associated with program

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))		# corresponding object files for .cpp files


.o : $(SRC)
	$(CPP) -c -I $(INCLUDES) $(CPPFLAGS) -o $(OBJ) $(SRC)


$(MAIN): $(OBJ)
	$(CPP) -L $(LIBSDIR) $(LDFLAGS) -o $(MAIN) $(OBJ) $(LIBS)


clean:
	$(RM) $(OBJ)

dist-clean:
	$(RM) $(MAIN)

Clean:
	$(RM) $(OBJ)
	$(RM) $(MAIN)






#g++ -L /home/achim/cpp/projectEuler/libs/primesieve/ -Wl,-rpath=/home/achim/cpp/projectEuler/libs/#primesieve/ -Wall -o pe001 pe001.cpp -lprimesieve





#$(CPP) -c -I $(INCLUDES) $(CPPFLAGS) -o $@ $(SRC) $<
