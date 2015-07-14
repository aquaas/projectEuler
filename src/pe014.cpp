#include <iostream>
#include "math.h"
#include "stdlib.h"

#include "armadillo"

struct max_pair {
    long value;
    long index;
};

max_pair max_array(long a[], long num_elements);


int main()
{
	long M,k;
	long Nmax=1000000;
	long chain[Nmax];
	max_pair maIn;


	for (long N = 1; N < Nmax; N++)
	{
		M=N;
		k=1;
		while (M!=1)
		{
			if (M%2==0)
				M=M/2;
			else
				M=3*M+1;

			k++;
		}
		chain[N]=k;
		// std::cout << N << " "<< k << std::endl; //printing 1e6 lines is time consuming.
	}


	maIn=max_array(chain, Nmax);

	std::cout << maIn.index << std::endl;



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
   return(A);
}
