#include <iostream>
#include "../libs/primesieve/primesieve.hpp"

#include "stdlib.h"

#include <sys/time.h>

#include <vector>

using namespace std;

int main()
{

	//What is the largest prime factor of the number 600851475143 ?

//	uint64_t N=600851475143;
	uint64_t N=53; //N =18446744030759878665;
        uint64_t N2=N;

        
        
        int Pblock = 1000;
        
        
        vector<uint64_t> primes(Pblock);
        vector<uint64_t> factors(Pblock);
        vector<int>      factorsCount(Pblock,0);
        
        uint64_t prime=1; //prime Index
        
        uint64_t c;
	uint64_t i=1;
	uint64_t rest=0;
	uint64_t Pstart=2;
        uint64_t Pend  =Pstart+Pblock;
        
        primesieve::generate_n_primes(Pblock,Pstart, &primes);
        
        for (auto c : primes)
            std::cout << c << ' ';
        std::cout << std::endl;
        
	while(rest==0 || primes[prime] < N2/2) 
	{
			
		
                std::cout <<"N= " << N << "\t  " << "prime= " << primes[prime] << std::endl;
		
                rest=N2%primes[prime];
                while(rest==0) 
                {

                    N2=N2/primes[prime];
                    factors[prime]=primes[prime];
                    factorsCount[prime]+=1;

                    rest=N2%primes[prime];
                    
                }
                
                prime++;
                
                
			

		i++;


	}
	
	
        for (auto c : factors)
            std::cout << c << ' ';
        std::cout << std::endl;
        




}
