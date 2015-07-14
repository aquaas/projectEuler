#include <iostream>
#include "math.h"
#include "stdlib.h"

#include <sys/time.h>

struct max_pair {
    long value;
    long index;
};

max_pair max_array(long a[], long num_elements);



int main()
{

	long i,N,triNumber,nDivisors;


//	double tstart,tend;
 
//	long steps[nMax];

//	max_pair result;

	N=1;
	nDivisors=0;
	while(nDivisors<=500)
	{
		triNumber=(N*(N+1))/2;
		nDivisors=0;

		for(i=1; i<=sqrt(triNumber); i++) 
		{
			if (triNumber%i==0)		
			nDivisors=nDivisors+2;
		
		}

		std::cout << "triangular Number: " << triNumber << " with " << nDivisors << " divisors." << std::endl;
		N++;


	} 

std::cout << "triangular Number: " << triNumber << " with " << nDivisors << " divisors." << std::endl;

}

max_pair max_array(long a[], long num_elements)
{
   long i;
   
   max_pair A;

	A.value=a[0];
	A.index=0;
	
   for (i=0; i<num_elements; i++)
   {
	 if (a[i]>A.value)
	 {
	    A.value=a[i];
	    A.index=i;
	 }
   }
   return 0;

}






