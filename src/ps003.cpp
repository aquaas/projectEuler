/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 
*/

#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"

//using namespace std;


//long

int main()
{	
//Programm fuer das Herausfinden von Primzahlen
	//int prim = 2;
	long long x,i, numb = 88;
	for(x=2; x<=numb;x++)
	{
		
		for(i = 2; i<=x; i++)
		{
		if(x%i == 0) break;
		//std::cout << i << std::endl;
		}
			if(i==x) {
				//printf("%i ist eine Primzahl.\n", x);
				while(numb%i==0){
				numb = numb/x;
				//std::cout<< numb <<std::endl;
				printf("%d ist Primfaktor von numb. \n",x);
				}
			}
	}
	return 0;
}

