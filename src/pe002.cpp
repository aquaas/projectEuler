#include "iostream"
#include "math.h"
#include "stdlib.h"

#include <sys/time.h>


int* fib(int n);
int sumInt(int* S, int N, int start, int spacer);


int main()
{

int* f;
int fsum;
double tstart,tend;

tstart=clock();

f=fib(33);

fsum=sumInt(f,33,3,3);


tend=clock();


std::cout << fsum << " in " << (tend-tstart)/CLOCKS_PER_SEC<< " seconds  \n";
}




int* fib(int n)
{
	int* f;
	int i;

	f = (int*) malloc(n*sizeof(int));

	f[1]=1;
	f[2]=1;

	for(i=3;i<n+1;i++)
	{

	    f[i]=f[i-1]+f[i-2];
	    
	}
return f;

}

int sumInt(int* S, int N, int start, int spacer)
{
	int sum=0;
	int i;

	for(i=start;i<=N;i+=spacer)
	{
		
		sum+=S[i];
	}

	return sum;

}

