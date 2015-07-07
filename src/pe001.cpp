#include <iostream>
#include "math.h"
#include "stdlib.h"

#include <sys/time.h>

#include "primesieve.hpp"
//#include "../include/primesieve.hpp"


//using namespace primesieve;

int main()
{

	int i,sum;
	double tstart,tend;
	int N=1e5;

	tstart=clock();


	sum=0;

	for(i=3; i<N; i+=3)
	{

		sum+=i;

	}

	for(i=5; i<N; i+=5)
	{

		sum+=i;

	}	

	for(i=15; i<N; i+=15)
	{
		sum-=i;
	}
	

	tend=clock();

	std::cout << sum << " in " << (tend-tstart)/CLOCKS_PER_SEC<< " seconds  \n";


	primesieve::print_primes(1,N);
	//if (primesieve::test())
	//	std::cout << "Test 1 " << std::endl;

}

